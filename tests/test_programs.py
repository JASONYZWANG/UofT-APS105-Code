import importlib.util
import os
from pathlib import Path
import re
import subprocess
import unittest

ROOT = Path(__file__).resolve().parents[1]
spec = importlib.util.spec_from_file_location("build", ROOT / "scripts/build.py")
build = importlib.util.module_from_spec(spec)
spec.loader.exec_module(build)


class ProgramTests(unittest.TestCase):
    @classmethod
    def setUpClass(cls):
        cls.programs = {name: build.compile_source(path, name) for name, path in build.SOURCES.items()}
        for path in (ROOT / "tests").glob("*.c"):
            cls.programs[path.stem] = build.compile_source(path, path.stem)

    def run_program(self, name, data="", code=0):
        result = subprocess.run([str(self.programs[name])], input=data, text=True, capture_output=True, timeout=10)
        self.assertEqual(result.returncode, code, result.stdout + result.stderr)
        return result.stdout

    def test_introductory_exercises(self):
        cases = [
            ("lab01_part1", "", "escape sequences"),
            ("lab01_part2", "10\n4\n", "33.90"),
            ("lab01_part3", "0.9144\n", "1 yards"),
            ("lab02_part1", "3\n3\n60\n", "60.00 degrees"),
            ("lab02_part2", "1234\n", "4761"),
            ("lab02_part3", "1 nC 1 nC\n1\n", "8.99nN"),
            ("lab03_part1", "5\n100\n", "Water"),
            ("lab03_part2", "10\n4\n", "The angle should be"),
            ("lab03_part3", "185\n", "$5: 1"),
            ("lab04_part2", "777\n1777\n7\n0\n", "2 pretty"),
        ]
        for name, data, expected in cases:
            with self.subTest(program=name):
                self.assertIn(expected, self.run_program(name, data))

    def test_monte_carlo_estimate_and_invalid_count(self):
        output = self.run_program("lab04_part1", "100000\n")
        probability = float(re.search(r"landing: ([0-9.]+)", output)[1])
        self.assertTrue(0.77 < probability < 0.80)
        self.run_program("lab04_part1", "0\n", code=1)

    def test_automaton_and_bounds(self):
        out = self.run_program("lab05_automaton", "8 30 2\n")
        self.assertIn("       ***       ", out)
        for data in ["17 30 2\n", "8 256 2\n", "8 30 -1\n"]:
            self.run_program("lab05_automaton", data, code=1)

    def test_connect_four_vertical_win_and_eof(self):
        self.assertIn("Player X wins!", self.run_program("lab06_part2", "0\n1\n0\n1\n0\n1\n0\n"))
        for name in ["lab06_part1", "lab06_part2"]:
            self.run_program(name, "")
            self.run_program(name, "invalid")

    def test_reversi_rules_and_dimensions(self):
        out = self.run_program("lab07_reversi_rules", "8\n!!!\nBcd\n")
        self.assertIn("Valid move.", out)
        for name in ["lab07_reversi_rules", "lab08_reversi_greedy"]:
            for dimension in ["0", "3", "27", "100"]:
                self.run_program(name, dimension + "\n", code=1)
        self.assertIn("Computer places B at cd", self.run_program("lab08_reversi_greedy", "8\nB\naa\n"))

    def test_heuristic_self_play_terminates(self):
        out = self.run_program("lab08_reversi_heuristic")
        moves, black, white = map(int, re.search(r"moves=(\d+) black=(\d+) white=(\d+)", out).groups())
        self.assertLessEqual(moves, 60)
        self.assertEqual(black + white, moves + 4)

    def test_queue_priority_fifo_remove_and_treat(self):
        commands = (ROOT / "examples/patient_queue.txt").read_text()
        out = self.run_program("lab09_patient_queue", commands)
        self.assertIn("Sam 5\nTaylor 5\nAlex 3", out)
        self.assertIn("Patient 102 Treated.", out)
        self.assertIn("Patient 101 Removed.", out)
        self.assertTrue(out.endswith("Taylor 5\n"))

    def test_queue_duplicate_missing_empty_and_eof(self):
        out = self.run_program("lab09_patient_queue", "T\nR 7\nA 1 A 2\nA 1 B 3\nD\n")
        self.assertIn("Queue is empty.", out)
        self.assertIn("Patient 7 not found.", out)
        self.assertIn("Patient 1 already exists.", out)
        self.assertTrue(out.endswith("A 2\n"))

    def test_queue_malformed_and_long_name(self):
        out = self.run_program("lab09_patient_queue", "A 1\nA 2 " + "x"*200 + " 5\nD\nQ\n")
        self.assertEqual(out.count("Error: Invalid command."), 2)
        self.assertIn("Queue is empty.", out)

    def test_native_rule_harnesses(self):
        for name in ["test_connect_four", "test_reversi"]:
            with self.subTest(harness=name):
                self.run_program(name)


if __name__ == "__main__":
    unittest.main()

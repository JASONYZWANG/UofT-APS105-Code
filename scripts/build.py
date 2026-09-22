"""Compile the independent C exercises; requires Python 3.10+ and GCC or Clang."""
import argparse
import os
from pathlib import Path
import shlex
import subprocess

ROOT = Path(__file__).resolve().parents[1]
SOURCES = {p.parent.name + "_" + p.stem: p for p in sorted((ROOT / "labs").glob("*/*.c"))}
SUFFIX = ".exe" if os.name == "nt" else ""


def compile_source(source, name):
    output = ROOT / "build" / (name + SUFFIX)
    output.parent.mkdir(exist_ok=True)
    flags = shlex.split(os.environ.get("CFLAGS", ""))
    command = [os.environ.get("CC", "gcc"), "-std=c11", "-Wall", "-Wextra", "-Wpedantic", "-Werror", "-O1", *flags, str(source), "-lm", "-o", str(output)]
    subprocess.run(command, check=True)
    return output


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("target", choices=["all", *SOURCES], nargs="?", default="all")
    args = parser.parse_args()
    for name, source in SOURCES.items():
        if args.target in ("all", name):
            print("Built", compile_source(source, name))


if __name__ == "__main__":
    main()

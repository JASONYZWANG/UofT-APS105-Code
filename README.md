# APS105 C Programming Portfolio

A curated collection of C programs from APS105 Computer Fundamentals at the University of Toronto. The repository follows a learning progression from console I/O and numerical calculations to board games, move-selection heuristics and dynamically allocated linked lists.

**18 standalone programs across Labs 1â€“9.** This is a collection of educational exercises, not one integrated application. The original coursework and dated practice files are retained locally; this public edition removes duplicate submissions, executables, object files, personal submission logs and machine-specific editor settings.

## Start here

| Project | Demonstrates | Source |
|---|---|---|
| Reversi rules explorer | Board representation, eight-direction legal moves and tile flipping | [Lab 7](labs/lab07/reversi_rules.c) |
| Playable Reversi with a greedy opponent | Turn management, move scoring, pass handling and game termination | [Lab 8 greedy](labs/lab08/reversi_greedy.c) |
| Positional Reversi self-play | A weighted-square heuristic plus immediate flips | [Lab 8 heuristic](labs/lab08/reversi_heuristic.c) |
| Patient priority queue | Dynamic allocation, sorted insertion, FIFO ties, removal and cleanup | [Lab 9](labs/lab09/patient_queue.c) |
| Connect Four | Gravity, input handling and four-direction win detection | [Lab 6](labs/lab06/part2.c) |
| Elementary cellular automaton | Arrays, binary rule encoding and synchronous state updates | [Lab 5](labs/lab05/automaton.c) |

The patient queue is a data-structure exercise, not clinical software. Reversi strategies are deterministic heuristics, not trained AI or a claim of optimal play.

## Build and run

Requirements: Python 3.10 or newer and a C11 compiler compatible with GCC command-line options. No Python packages, course-only libraries or prebuilt binaries are required.

```sh
python scripts/build.py
```

Executables appear in `build/`. On Windows, they have an `.exe` extension. GCC must be available as `gcc` on PATH, or set `CC` to its executable path.

Windows PowerShell example with MSYS2 UCRT64:

```powershell
$env:CC = "C:\msys64\ucrt64\bin\gcc.exe"
python scripts/build.py
.\build\lab08_reversi_greedy.exe
.\build\lab08_reversi_heuristic.exe
Get-Content examples/patient_queue.txt | .\build\lab09_patient_queue.exe
```

macOS/Linux with a suitable compiler:

```sh
CC=clang python scripts/build.py
./build/lab08_reversi_greedy
./build/lab08_reversi_heuristic
./build/lab09_patient_queue < examples/patient_queue.txt
```

Build just one exercise:

```sh
python scripts/build.py lab09_patient_queue
```

Or compile it directly:

```sh
gcc -std=c11 -Wall -Wextra -Wpedantic labs/lab09/patient_queue.c -o patient_queue
```

See [the lab guide](docs/lab-guide.md) for every executable name and input format. Early numerical exercises assume reasonable, representable inputs within the documented mathematical domain; they are not comprehensive parsers for arbitrary data.

## Example: stable priority queue

```text
A 101 Alex 3
A 102 Sam 5
A 103 Taylor 5
D
T
R 101
D
Q
```

The first display lists `Sam 5`, `Taylor 5`, then `Alex 3`: larger severity values come first, and equal priorities preserve arrival order. Treatment removes Sam; removing ID 101 leaves Taylor. Use one command per line, names without spaces, and values representable as C integers.

## Repository architecture

```text
labs/
  lab01/ ... lab04/   Console I/O, arithmetic, decisions and loops
  lab05/             Elementary cellular automaton
  lab06/             Connect Four placement and win detection
  lab07/             Reversi rules and one-move validation
  lab08/             Greedy game and positional heuristic self-play
  lab09/             Linked-list priority queue
examples/             Reproducible command inputs
scripts/              Compiler driver and clean release packager
tests/                CLI regression cases and C rule harnesses
docs/                 Learning progression, provenance and limitations
.github/workflows/    Automated build and test configuration
```

Each C source defines its own program. Compile each separately: combining all files would create conflicting `main` functions and repeated helper names. [Architecture details](docs/architecture.md) explain the board-game and linked-list designs.

## What the history demonstrates

The retained sources show an incremental progression: Connect Four placement before win detection, Reversi rules before a complete greedy game, and later position-weighted move selection. The original heuristic test driver relied on a course library. This edition provides a new standalone self-play driver while retaining the student's rule and scoring functions.

Publication changes include input/EOF checks, standard `INT_MAX`, an initialized Monte Carlo counter, array/board bounds checks, queue allocation checks, regression tests and build automation. These are September 2026 maintenance changes, not retrospectively claimed coursework achievements. See [the development record](docs/development.md).

## Verification

```sh
python -m unittest discover -s tests -v
```

The suite builds all 18 programs with C11 and warnings treated as errors, then checks console examples, Monte Carlo output, automaton boundaries, Connect Four wins, Reversi legality/flipping/self-play, and queue ordering and error cases. Tests use the Python standard library and native C assertions.

[The verification record](docs/verification.md) distinguishes successful checks from local Windows execution restrictions. The GitHub Actions workflow is configured to run on Ubuntu; its existence is not a claim that a remote run has already passed.

## Source preservation and attribution

[Source mappings](docs/source-map.json) identify the selected original file and SHA-256 for each published C program. [The practice inventory](docs/practice-inventory.md) lists dated exercises retained outside the public build. Original files, including pre-existing local edits, stay in `_local_archive/` with a hash manifest.

[Credits](CREDITS.md) describe authorship, the course context and AI-assisted repository maintenance. This repository does not include official assignment handouts or the compiled course opponent library. No new open-source license is imposed on material with mixed student/course provenance.

## Prepare a GitHub upload

```sh
python scripts/package_release.py
```

Extract `dist/aps105-c-portfolio.zip` and upload its contents to the repository root, including `.github` and `.gitignore`. The ZIP excludes `.git`, original archives, build outputs and local editor configuration. When updating an existing repository, old files must also be removed from its current tree; uploading new files alone does not remove them. This preparation does not push commits or rewrite history.

# Architecture and implemented behavior

## Independent executables

The repository has 18 single-translation-unit programs. There is no server, database or shared application entry point. The Python build driver discovers each source, gives it a unique executable name and compiles with C11, warnings and the math library. Tests invoke executables with known input and verify outputs; C harnesses additionally test internal rule functions.

## Board-game progression

Connect Four stores a 6×7 character matrix. A selected column determines the lowest empty row; a separate scan checks four directions for four connected pieces. The earlier lab stage only places pieces, while the later stage detects a winner.

Reversi stores a maximum 26×26 board with an active even dimension. A move is legal when an adjacent run of opposite-colour pieces is bounded by the current colour. Eight directional checks feed legal-move detection, flip counting and tile updates. The greedy game adds player turns, pass handling and terminal piece counts. The heuristic variant reuses those rules and scores squares with an 8×8 positional table.

The heuristic self-play driver is new publication tooling. It removes the need for the original binary opponent harness but does not reproduce results against that opponent. Comparing a heuristic against itself is a termination/rules check, not a competitive strength evaluation.

## Linked-list queue

Each patient node owns an ID, fixed-size name buffer, severity and next pointer. The queue owns its head pointer. New nodes are inserted before the first lower-priority node, preserving insertion order among ties. Lookup, insertion and arbitrary removal are linear in queue length. Treatment removes the head in constant time. Quit walks the list and frees every node.

The command loop now reads bounded lines, validates command shape and passes operations to the retained linked-list functions. Allocation failures are reported before dereferencing a new node. This remains an educational integer-priority queue, not a medical triage model.

## Publication boundary

The public tree contains selected source programs, build/test scripts, command examples and documentation. The local archive contains every original file and a manifest, including duplicate submissions, incomplete practice, editor settings, old binaries and the unrelated thermal-image C++ experiment. The package script uses an explicit allowlist instead of recursively exporting the working directory.

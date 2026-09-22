# Development and maintenance record

## Historical evidence

The original repository contains lab directories, submitted copies, dated practice folders and generated binaries. It does not contain the same client-design documentation as the Galbraith project. Therefore this portfolio documents a programming learning progression, rather than inventing client interviews, formal concept selection or engineering requirements that are not present.

Functional requirements are inferred from program behavior: compute numerical results, evolve a cellular automaton, place and validate board-game moves, choose computer moves, and maintain a priority-ordered linked list. These descriptions are not quotations from official assignment specifications.

Concrete stages visible in source are:

1. Labs 1–3: I/O, expressions, unit handling, decisions and loops.
2. Lab 4: helper functions and repeated numerical trials.
3. Lab 5: arrays, binary rules and synchronous update buffers.
4. Lab 6 part 1 then part 2: placement logic extended with win detection.
5. Lab 7 then Lab 8: Reversi rules extended with a complete game and greedy move selection.
6. Later Lab 8 source: position-weighted selection and an external opponent harness.
7. Lab 9: dynamically allocated linked-list operations and stable priority ordering.

These are retained program variants, not proof of exact development dates, grades or benchmark wins. The fully commented Lab 8 submission snapshot is not a separate executable.

## September 2026 changes

| Observed issue | Targeted change | Verification |
|---|---|---|
| Monte Carlo accumulator was uninitialized | Initialize it to zero and require positive iterations | Seeded estimate falls near the circle/square ratio; zero rejected |
| Several input reads ignored conversion counts | Check scalar reads before use | Valid examples and invalid board inputs |
| Connect Four discarded input until newline without checking EOF | Stop at EOF and exit cleanly; handle full board | EOF cases, placement and directional-win harness |
| Cellular automaton could index outside its rule or state array | Validate index, rule and iteration limits | Valid rule-30 row and invalid parameters |
| Reversi accepted unsupported dimensions | Validate even 4–26 boards | Invalid-dimension regression cases |
| Heuristic table was fixed at 8×8 | Enforce 8×8 and provide a standalone driver | Legal self-play and unsupported-size guard |
| One corner weight was 800 versus 80 elsewhere | Normalize to 80 | Explicit behavior change; no strength claim |
| Queue used unbounded name scanning and ignored failed allocation | Bounded line parsing and allocation guards | Malformed/long-name input and list operations |
| Compiler-specific `__INT_MAX__` | Standard `<limits.h>` and `INT_MAX` | Warning-clean C11 builds |
| Negative integer digit counting could negate INT_MIN in int | Promote working value to long long | Removes that signed-negation overflow |
| Duplicate copies, binaries and machine settings obscured source | Curated source map, local archive and explicit release allowlist | File manifest and package audit |

The student's original functions and overall algorithms are retained where practical. This is not a claim that every exercise has been redesigned as production-grade software. Very large numeric inputs, mathematical domain errors in early examples, allocation-failure injection and exhaustive game states are outside current test coverage.

## Further work

Possible extensions include separating board rules into a reusable library, adding minimax as a separately benchmarked strategy, property-based rule tests, full numeric parsing with range checks, and memory-sanitizer runs on a supported Linux toolchain. These are future improvements, not completed features.

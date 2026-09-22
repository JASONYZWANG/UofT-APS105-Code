# Lab guide

All targets can be built by `python scripts/build.py TARGET`. Windows adds `.exe` to the output filename. Numerical values should fit the C types used; early exercises are demonstrations with limited domain validation.

| Target | Purpose | Input / example |
|---|---|---|
| `lab01_part1` | Print escape-sequence examples | No input |
| `lab01_part2` | Rental charge with free days and tax | Daily rate, then nonnegative days; `10 4` gives 33.90 |
| `lab01_part3` | Metres to yards/feet/inches | Small nonnegative metres, e.g. `0.9144` |
| `lab02_part1` | Triangle trigonometry | Side A, side B, alpha in degrees; `3 3 60`. Only valid nondegenerate cases; does not enumerate ambiguous SSA solutions |
| `lab02_part2` | Decode a four-digit combination | `1234` gives `4761` |
| `lab02_part3` | Coulomb force with prefixes | `1 nC 1 nC`, then positive distance `1` |
| `lab03_part1` | Classify a boiling-point observation | Nonnegative tolerance and temperature, e.g. `5 100`; constants are inherited exercise values |
| `lab03_part2` | Search integer launch angles | Distance 3–30 m and height 3–6 m; `10 4`. May print no angle if none meets its tolerance |
| `lab03_part3` | Denomination decomposition | Nonnegative multiple of five, e.g. `185` |
| `lab04_part1` | Monte Carlo circle hit probability | Positive iteration count, e.g. `100000`; seeded RNG is implementation-dependent |
| `lab04_part2` | Count numbers containing at least three sevens | Integers followed by zero, e.g. `777 1777 7 0` |
| `lab05_automaton` | Seventeen-cell elementary automaton | Initial index 0–16, rule 0–255, printed generations 0–10000; `8 30 5` |
| `lab06_part1` | Alternating tile placement | Columns 0–6; negative value or EOF exits; no win detection in this stage |
| `lab06_part2` | Connect Four game | Columns 0–6; detects vertical, horizontal and diagonal wins; negative value or EOF exits |
| `lab07_reversi_rules` | Configure and validate one move | Even dimension 4–26; configuration triples such as `Baa`, end with `!!!`; then a move such as `Bcd` |
| `lab08_reversi_greedy` | Human vs greedy Reversi | Even dimension 4–26; computer colour B/W; human coordinates such as `cd` |
| `lab08_reversi_heuristic` | Autonomous positional-strategy demonstration | No input; fixed 8×8 board and same heuristic for both colours |
| `lab09_patient_queue` | Stable linked-list priority queue | One command per line: `A id name severity`, `D`, `T`, `R id`, `Q` |

## Reversi conventions

`B` and `W` are pieces; `U` is an unoccupied square. Coordinates are lowercase row and column letters beginning with `a`. Black moves first. The greedy player chooses the first row-major move with the highest immediate flip count. The positional heuristic scores the candidate square plus 0.5 times the flip count. Neither performs minimax search.

The heuristic table is 8×8, so its public driver deliberately uses only that size. The inherited lower-left corner weight was 800 while the other corners were 80; this edition normalizes it to 80 as an explicitly documented consistency change, not a proven strategy improvement.

## Queue conventions

Larger severity integers are treated first. Equal priorities remain in insertion order. IDs must be unique. Names contain one token of at most 100 characters. Empty treatment, missing removal IDs, duplicate IDs and malformed commands generate messages. EOF and `Q` release the list. Use synthetic data: this exercise has no persistence, privacy controls or real clinical workflow.

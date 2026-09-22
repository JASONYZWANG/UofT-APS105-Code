# Verification record

All 18 standalone C programs compile with GCC 15.2.0 on Windows using `-std=c11 -Wall -Wextra -Wpedantic -Werror -O1`. Two C rule harnesses also compile under the same flags.

The regression suite contains ten test methods with multiple cases: introductory numerical examples, Monte Carlo estimate and invalid count, automaton output and limits, Connect Four win/EOF, Reversi dimensions/moves, heuristic self-play, stable queue ordering, duplicate/missing IDs, malformed names and internal game rules. The C harnesses exercise all eight Reversi directions and all four Connect Four win directions.

During local verification, Windows Application Control intermittently rejected a newly compiled executable with WinError 4551. Separate runs successfully executed each test method, but the initial complete runs each contained one environment-blocked launch. This is recorded as an environment limitation rather than silently treating a blocked executable as a passed test. Remote CI has not been run as part of preparation.

A successful compile or a small set of examples does not establish all-input correctness. Tests do not assert exact random-number sequences across C libraries, optimal Reversi strategy, official grading results or exhaustive memory safety. No precompiled executable is included in the upload package.

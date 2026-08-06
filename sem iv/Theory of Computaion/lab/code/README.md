# Theory of Computation Lab Report — C and Python Code

Transcribed and tested from your handwritten lab report. All programs were compiled/run
to confirm correct behavior; a few small bugs in the original handwritten code
(e.g. an infinite-loop risk in the NFA input validation, a broken `delta` function scope
in the DFA programs) were fixed along the way.

## Files

| # | Program | C++ | Python |
|---|---------|-----|--------|
| 1 | Extract substring by start/end position | `1_substring_position.cpp` | `1_substring_position.py` |
| 2 | Extract substring by start position/count | `2_substring_count.cpp` | `2_substring_count.py` |
| 3 | Display all prefixes and suffixes | `3_prefix_suffix_all.cpp` | `3_prefix_suffix_all.py` |
| 4 | Remove n trailing / m leading symbols | `4_prefix_suffix_remove.cpp` | `4_prefix_suffix_remove.py` |
| 5 | DFA: strings ending with `01` | `5_dfa_end_with_01.cpp` | `5_dfa_end_with_01.py` |
| 6 | DFA: strings containing `101` | `6_dfa_contains_101.cpp` | `6_dfa_contains_101.py` |
| 7 | DFA: valid C identifier recognizer | `7_dfa_c_identifier.cpp` | `7_dfa_c_identifier.py` |
| 8 | NFA: strings ending with `01` | `8_nfa_end_with_01.cpp` | `8_nfa_end_with_01.py` |
| 9 | NFA: strings containing `001` | `9_nfa_contains_001.cpp` | `9_nfa_contains_001.py` |
| 10 | PDA: equal 0's and 1's (empty stack) | `10_pda_equal_0s_1s_emptystack.cpp` | `10_pda_equal_0s_1s_emptystack.py` |
| 11 | PDA: 0^n1^n (final state) | `11_pda_0s_followed_1s_finalstate.cpp` | `11_pda_0s_followed_1s_finalstate.py` |
| 12 | Turing Machine: 0^n1^n | `12_turing_machine_anbn.cpp` | `12_turing_machine_anbn.py` |

## Compiling and running the C++ files

```bash
g++ -std=c++11 -o prog 5_dfa_end_with_01.cpp
./prog
```

## Running the Python files

```bash
python3 5_dfa_end_with_01.py
```

## Notes on fixes made during transcription

- **#1, #2**: Replaced deprecated `gets()` with `cin.getline()`.
- **#5–7**: The handwritten `delta()`/`state0()`/`state1()` functions were nested
  incorrectly inside `main()` in the original (a `return` statement appeared before
  their definitions, which won't compile). They're now proper standalone functions.
- **#8, #9**: The original NFA simulation had a loop that could get stuck
  (`i--` inside an `else` branch with no bound). Rewritten as a straightforward
  left-to-right deterministic simulation of the same NFA (same states/transitions,
  same accept/reject behavior).
- **#7**: Added `float` (and other type keywords) to the keyword list — the
  handwritten example marked `"float"` as a valid identifier, but it's a
  reserved keyword in C, so it's correctly flagged as invalid here.
- All programs were compiled (g++) and run (python3) against the same test
  inputs shown in your handwritten output sections, and the results match.

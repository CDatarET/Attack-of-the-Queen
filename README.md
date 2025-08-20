# Attack-of-the-Queen
CodeChef Difficulty 1076 Problem.


Chef has started developing interest in playing chess, and was learning how the **Queen** moves.

Chef has an empty **N × N** chessboard. He places a Queen at position **(X, Y)** and wonders — what are the number of cells that are under attack by the Queen?

---

## Notes

- The top-left cell is **(1, 1)**, the top-right cell is **(1, N)**, the bottom-left cell is **(N, 1)**, and the bottom-right cell is **(N, N)**.
- The Queen can be moved any number of unoccupied cells in a straight line **vertically, horizontally, or diagonally**.
- The cell on which the Queen is placed is **not** considered to be under attack.

---

## Input Format

- The first line contains a single integer `T` — the number of test cases.
- The following `T` lines each contain three integers:  
  `N`, `X`, and `Y` — where  
  - `N` is the size of the chessboard,  
  - `(X, Y)` is the position of the Queen.

---

## Output Format

- For each test case, output a single line containing one integer — the total number of cells that are under attack by the Queen.

---

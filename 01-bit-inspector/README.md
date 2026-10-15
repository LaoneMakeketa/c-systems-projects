# Project 1 — Bit Inspector and Flag Toolkit

## Objective

Build a program that reads a non-negative integer and lets you inspect and
manipulate its individual bits. The goal is to make bitwise operators
tangible: you see every bit, and you verify every operation by eye.

## Requirements

### Part A — Display
1. Ask the user to enter a non-negative integer.
2. Read it into an `unsigned int`.
3. Print the value in:
   - decimal
   - hexadecimal, prefixed with `0x`
   - binary, as exactly 32 bits, grouped in 4-bit chunks separated by single
     spaces. For example, the value `0x0000000F` must print as:
     ```
     0000 0000 0000 0000 0000 0000 0000 1111
     ```
   You must produce this binary output yourself using bitwise operators.
   Standard C has no format specifier for binary, so you cannot rely on
   `printf` to do it for you.

### Part B — Bit check
4. Ask the user to enter a bit position (0–31).
5. Print whether that bit is set (`1`) or clear (`0`).
6. Print the result of `value & (1u << position)` in decimal and in hex, so
   the mask is visible.

### Part C — Bit operations
7. Ask the user to enter a bit position (0–31) again.
8. Show the result of each of these operations on the original value, printing
   the new value in decimal, hex, and binary:
   - Set the bit: `value | (1u << position)`
   - Clear the bit: `value & ~(1u << position)`
   - Toggle the bit: `value ^ (1u << position)`
9. Each operation must start from the original value, not from the result of
   the previous operation.

### Edge cases
- Bit position 0 (least significant bit).
- Bit position 31 (most significant bit of a 32-bit unsigned int).
- Value `0`.
- Value `0xFFFFFFFF` (enter `4294967295`).
- A bit position outside 0–31: print a clear message and do not perform the
  operation.

## Constraints

Use only concepts from your current notes:

- `#include <stdio.h>`
- `int main(void)`
- Variables of type `unsigned int`, `int`, and `char`
- `printf` with the format specifiers in your notes
- `scanf` with `&`
- Arithmetic, comparison, logical, and bitwise operators
- Compound assignment operators where useful
- `const` or `#define` for constants like a bit count
- Comments
- `return 0;`

Your notes do not include control-flow statements (`if`, `for`, `while`,
etc.), user-defined functions, arrays, strings as variables, or headers other
than `<stdio.h>`. The project must be solvable without them. If you
independently choose to use something outside your notes, that is your
choice, and it will not be held against you — but the problem is designed to
be completable within your notes as they stand.

Note that producing 32 bits of output without a loop means writing enough
sequential statements to cover all 32 positions, and handling an out-of-range
position without `if` means expressing the guard with the operators you have.

## Acceptance criteria

- [ ] Program compiles with `gcc` using only `<stdio.h>`.
- [ ] Reads an `unsigned int` with the correct format specifier.
- [ ] Prints decimal, hex, and 32-bit binary for the input value.
- [ ] Binary output is exactly 32 bits, grouped as 4-bit chunks separated by
      single spaces.
- [ ] Bit check correctly reports set/clear for positions 0 and 31.
- [ ] Bit check prints the mask result in decimal and hex.
- [ ] Set, clear, and toggle each start from the original value and print
      decimal, hex, and binary.
- [ ] Bit position 0 and bit position 31 both work.
- [ ] Value `0` and value `4294967295` both work.

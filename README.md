# c-projects

A growing collection of C programming practice projects. Each project is a
self-contained exercise with its own problem statement, solution, and a
record of how it was compiled and run.

## Purpose

This repo exists to build deep, durable understanding of C and systems
programming through deliberate practice. Each project is designed to be
solvable using only the concepts I had studied at the time, and each one is
written up so I can look back and see how my reasoning has changed.

## Structure

Each numbered folder is one project and contains:

- `README.md` — the problem statement and my notes on the solution
- `main.c` — my solution
- `run.txt` — the compiler command, compiler output, and program output for
  each tested input

## Projects

| # | Project | Concepts practised |
|---|---------|--------------------|
| 01 | [Bit Inspector and Flag Toolkit](01-bit-inspector/) | bitwise operators, masking, unsigned arithmetic, format specifiers |

## Environment

- OS: CachyOS (Arch-based Linux)
- Compiler: GCC
- Editor: Zed
- Build: manual, `gcc main.c -o main.out`

## Conventions

- One folder per project, numbered in order.
- Each project's `README.md` holds the problem statement, constraints, and
  my write-up.
- Compiler command, compiler output, and program output are recorded in a
  single `run.txt` per project.
- Projects are constrained to the concepts I had at the time.

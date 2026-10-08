# Recursion Examples

Recursive factorial, array summation, and binary search.

An educational C++ example developed from coursework, organized as a standalone project.

## Build and run

Requires a C++17 compiler and Make. Smoke checks also require Python 3.

```sh
make
make run
make check
```

To choose a compiler: `make CXX=clang++` or `make CXX=g++`. Run `make clean` to remove build outputs.

## Example

Run the executable to see factorials of 5 and 7, a prefix sum, and binary search results.

## Structure

- `src/`: source code and headers.
- `tests/smoke.py`: representative console checks with execution timeouts.
- `Makefile`: builds the source files together into `build/example`.

## Scope

These demonstrations use small, fixed inputs. Factorial does not validate negative inputs or detect integer overflow.

The source retains the original exercise logic and explanatory comments. Build outputs, submission documents, and course materials are not part of this repository.

# Recursion examples

These are three small C++ examples I worked on while learning recursion: factorial, adding numbers in an array, and binary search.

The program finds the factorials of 5 and 7, adds the first four numbers in an array, and searches for 8. Everything is already set in the code, so you can run it without entering anything.

The factorial function is meant for small positive numbers. It does not check for negative input or numbers that are too large for an int.

To build and run it, you need a C++17 compiler and Make. Open a terminal in this folder and run:

```sh
make
make run
```

You can also run `make check` to check the sample output. That needs Python 3. Use `make clean` if you want to remove the compiled program.

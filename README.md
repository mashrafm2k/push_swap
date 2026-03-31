*This project has been created as part of the 42 curriculum by \<moashraf\>.*

# push_swap

## Description

**push_swap** is a sorting algorithm project from the 42 curriculum.
The objective is to sort a list of integers using **two stacks (A and B)** and a **restricted set of operations**, while minimizing the total number of moves.

The program:

* Parses and validates integer input from the command line
* Detects errors such as duplicates, invalid numbers, or overflow
* Applies an optimized sorting strategy
* Outputs only the sequence of operations required to sort the stack

For small datasets, dedicated minimal-move sorting is used.
For large datasets (e.g., 100 or 500 numbers), an **optimized chunk-based algorithm** ensures the move count stays within 42 evaluation limits.

-------------------------------------------------------------------------

## Instructions

### Compilation

Clone the repository and run:
```bash
make
```

This will:

* Compile all source files
* Build the required **libft** library
* Produce the executable:

./push_swap

-------------------------------------------------------------------------

### Usage

#### Basic execution

```bash
./push_swap 3 2 1
```

The program prints the operations needed to sort the numbers.

-------------------------------------------------------------------------

#### Check correctness with the checker

```bash
./push_swap 3 2 1 | ./checker_linux 3 2 1
```

Expected output:

OK

-------------------------------------------------------------------------

#### Benchmark tests

**100 numbers**

```bash
ARG=$(shuf -i 1-100 -n 100 | tr '\n' ' ')
./push_swap $ARG | wc -l
```

**500 numbers**

```bash
ARG=$(shuf -i 1-500 -n 500 | tr '\n' ' ')
./push_swap $ARG | wc -l
```

Typical optimized results:

* **100 numbers:** < 700 moves
* **500 numbers:** ~5000-5400 moves

-------------------------------------------------------------------------

## Resources

### Algorithm & data structure references

* Stack data structure fundamentals
* Sorting algorithm optimization strategies
* Linked list manipulation in C
* Time and move complexity analysis

Common useful documentation:

* GNU C Library documentation
* C language reference manuals
* Algorithm design tutorials (chunking, greedy rotation, indexing)

-------------------------------------------------------------------------

### Use of AI in this project

AI assistance was used as a **learning and guidance tool**, specifically for:

* Debugging compilation, parsing, and memory issues
* Understanding sorting optimization strategies
* Drafting documentation such as this README

All **final code, testing, debugging decisions, and validation** were reviewed and executed manually to ensure full understanding and compliance with 42 academic integrity expectations.

-------------------------------------------------------------------------

## Author

**42 student:** `moashraf`
Part of the **42 Abu Dhabi** curriculum.

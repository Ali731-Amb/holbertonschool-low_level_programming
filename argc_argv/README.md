# C - argc, argv

## Table of Contents

- [About](#about)
- [Getting Started](#getting_started)
- [Usage](#usage)
- [Tasks](#tasks)
- [Learning Objectives](#learning_objectives)

## About <a name = "about"></a>

This project focuses on understanding and using command-line arguments in C programming. You will learn how to use `argc` (argument count) and `argv` (argument vector) to pass data to your programs at runtime, making them more flexible and interactive.

The `argc` parameter contains the number of command-line arguments passed to the program, while `argv` is an array of strings representing those arguments. This fundamental concept is essential for creating command-line tools and utilities that can accept user input directly from the terminal.

## Getting Started <a name = "getting_started"></a>

These instructions will help you compile and test the programs in this project on your local machine.

### Prerequisites

You need the following tools installed on your system:

```bash
gcc (GNU Compiler Collection) - version 4.8.4 or later
Ubuntu 20.04 LTS or similar Linux distribution
Betty linter for code style checking
```

Install GCC if not already available:

```bash
sudo apt-get update
sudo apt-get install gcc
sudo apt-get install build-essential
```

### Installing

Follow these steps to compile and run the programs:

1. Clone the repository:

```bash
git clone https://github.com/Ali731-Amb/holbertonschool-low_level_programming.git
```

2. Navigate to the argc_argv directory:

```bash
cd holbertonschool-low_level_programming/argc_argv
```

3. Compile any C file with the required flags:

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 filename.c -o output_name
```

4. Run the compiled program with arguments:

```bash
./output_name arg1 arg2 arg3
```

The program will process the command-line arguments according to its specific functionality.

## Usage <a name = "usage"></a>

Each program in this directory demonstrates different aspects of working with command-line arguments.

### Example 1: Print program name

```bash
gcc -Wall -pedantic -Werror -Wextra 0-whatsmyname.c -o mynameis
./mynameis
```

**Output:**
```
./mynameis
```

If you rename the executable:
```bash
mv mynameis mynewname
./mynewname
```

**Output:**
```
./mynewname
```

### Example 2: Count arguments

```bash
gcc -Wall -pedantic -Werror -Wextra 1-args.c -o nargs
./nargs hello world "foo bar"
```

**Output:**
```
3
```

### Example 3: Print all arguments

```bash
gcc -Wall -pedantic -Werror -Wextra 2-args.c -o args
./args You can do anything
```

**Output:**
```
./args
You
can
do
anything
```

### Example 4: Multiply two numbers

```bash
gcc -Wall -pedantic -Werror -Wextra 3-mul.c -o mul
./mul 5 10
```

**Output:**
```
50
```

If incorrect number of arguments:
```bash
./mul 5
```

**Output:**
```
Error
```

### Example 5: Add positive numbers

```bash
gcc -Wall -pedantic -Werror -Wextra 4-add.c -o add
./add 1 2 3 4 5
```

**Output:**
```
15
```

If non-numeric argument is provided:
```bash
./add 1 2 a 4
```

**Output:**
```
Error
```

## Tasks <a name = "tasks"></a>

### 0. It ain't what they call you, it's what you answer to
**File:** `0-whatsmyname.c`

Write a program that prints its name, followed by a new line.
- If you rename the program, it will print the new name without having to compile it again.
- The program should print the name even if no arguments are passed.

### 1. Silence is argument carried out by other means
**File:** `1-args.c`

Write a program that prints the number of arguments passed into it.
- The program name counts as one argument.
- The count should not include the program name itself.

### 2. The best argument against democracy is a five-minute conversation with the average voter
**File:** `2-args.c`

Write a program that prints all arguments it receives.
- All arguments should be printed, one per line.
- The first argument should be the name of the program.

### 3. Neither irony nor sarcasm is argument
**File:** `3-mul.c`

Write a program that multiplies two numbers.
- The program should receive exactly two arguments (numbers to multiply).
- The program should print the result, followed by a new line.
- If the program does not receive two arguments, print `Error` and return `1`.

### 4. To infinity and beyond
**File:** `4-add.c`

Write a program that adds positive numbers.
- Print the result followed by a new line.
- If no number is passed, print `0`.
- If one of the numbers contains symbols that are not digits, print `Error` and return `1`.

### 5. Minimal number of coins for change (Advanced)
**File:** `100-change.c`

Write a program that prints the minimum number of coins to make change for an amount of money.
- Usage: `./change cents`
- Where `cents` is the amount of cents you need to give back.
- Use coins of values: 25, 10, 5, 2, and 1 cent.
- If the number of arguments is not exactly 1, print `Error` and return `1`.
- If the argument is negative, print `0`.

## Learning Objectives <a name = "learning_objectives"></a>

By the end of this project, you should be able to explain the following concepts without external help:

### General
- How to use arguments passed to your program
- What are the two prototypes of `main` that you know of, and when to use each one
- How to use `__attribute__((unused))` or `(void)` to compile functions with unused variables or parameters

### Prototypes of main
There are two common prototypes for the `main` function:

1. **Without command-line arguments:**
```c
int main(void)
```
Use this when your program doesn't need to accept command-line arguments.

2. **With command-line arguments:**
```c
int main(int argc, char *argv[])
```
or
```c
int main(int argc, char **argv)
```
Use this when your program needs to process command-line arguments.

### Understanding argc and argv
- **argc (argument count):** An integer that represents the number of command-line arguments passed to the program, including the program name itself.
- **argv (argument vector):** An array of strings (character pointers) where each element is one of the command-line arguments. `argv[0]` is always the program name.

### Handling unused parameters
When you have parameters that are not used in your function, you can avoid compiler warnings by:

```c
int main(int argc __attribute__((unused)), char *argv[])
{
    // argc is marked as unused
    printf("%s\n", argv[0]);
    return (0);
}
```

or

```c
int main(int argc, char *argv[])
{
    (void)argc; // Explicitly mark as unused
    printf("%s\n", argv[0]);
    return (0);
}
```

## Requirements

### General
- Allowed editors: `vi`, `vim`, `emacs`
- All files will be compiled on Ubuntu 20.04 LTS using `gcc` with the options `-Wall -Werror -Wextra -pedantic -std=gnu89`
- All files should end with a new line
- A `README.md` file at the root of the project folder is mandatory
- Code must follow the Betty style (checked with `betty-style.pl` and `betty-doc.pl`)
- No global variables allowed
- No more than 5 functions per file
- Prototypes of all functions should be included in the header file `main.h`
- Don't forget to push your header file
- The use of the standard library is allowed

## Compilation

All C files should be compiled using:

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o program_name
```

## Author

**Ali Ambre** - [Ali731-Amb](https://github.com/Ali731-Amb)

## Acknowledgments

- Holberton School for the project requirements and curriculum
- All peers who provided support and code reviews


# argc & argv – Holberton School Project

## Introduction
This project introduced me to **command-line arguments** in C, and forced me to move beyond programs that only rely on internal variables. For the first time, my programs had to process data passed directly from the terminal, validate inputs, convert strings to numbers, and manage error cases gracefully.

I also learned the two valid prototypes of `main`, why both exist, and how to silence unused-parameter warnings using tools like `__attribute__((unused))` and `(void)parameter`.
These concepts are essential for building real command-line utilities that behave correctly regardless of how they are invoked.

---

## Concepts Learned

- **How to use arguments passed to the program**
  - Understanding the meaning of `argc` (argument count) and `argv` (argument vector).
  - Accessing values from the command line and iterating over them.

- **Two valid prototypes of `main`**
  - `int main(void)` → used when no arguments are required.
  - `int main(int argc, char *argv[])` → used when arguments need to be processed.

- **How to handle unused parameters**
  - Using `(void)argc;` or `(void)argv;` to silence warnings.
  - Or using `__attribute__((unused))` for cleaner prototypes.

- **Practical argument parsing**
  - Detect missing arguments.
  - Validate that arguments represent valid integers.
  - Convert strings to numbers with `atoi`.

---

## Tasks

### `0-whatsmyname` – It ain't what they call you, it's what you answer to
**Instruction:** Write a program that prints its own name, followed by a newline.

**Constraints:**
- The program must print its name exactly as received in `argv[0]`.
- If renamed, it prints the new name without recompilation.
- You must not strip the path.

**What I learned:**
How to use `argv[0]` to inspect the invoked program name and how command-line invocation directly impacts program behavior.

---

### `1-args` – Silence is argument carried out by other means
**Instruction:** Write a program that prints the number of arguments passed to it.

**Constraints:**
- Print a number followed by a newline.
- The program name is **not** counted.

**What I learned:**
How `argc` works, and how to subtract one to get the actual number of user-provided arguments.

---

### `2-args` – The best argument against democracy is a five-minute conversation with the average voter
**Instruction:** Write a program that prints all arguments it receives.

**Constraints:**
- Print each argument on its own line.
- Include the first argument (`argv[0]`).

**What I learned:**
How to loop through all values in `argv` and handle arbitrary numbers of inputs.

---

### `3-mul` – Neither irony nor sarcasm is argument
**Instruction:** Write a program that multiplies two numbers.

**Constraints:**
- Program receives exactly **two** arguments.
- Print the result of their multiplication.
- If arguments are missing, print `Error` and return `1`.
- All values must fit in an `int`.

**What I learned:**
How to validate argument counts and convert string arguments to integers using `atoi`.

---

### `4-add` – To infinity and beyond
**Instruction:** Add all positive numbers passed as arguments.

**Constraints:**
- Print the result followed by a newline.
- If no arguments are given, print `0`.
- If any argument is not entirely numeric, print `Error` and return `1`.
- All values fit in an `int`.

**What I learned:**
How to validate that a string contains only digits before using it, and how to accumulate values from multiple arguments.

---

### `100-change` – Minimal Number of Coins for Change *(advanced)*
**Instruction:** Print the minimum number of coins needed to make change.

**Constraints:**
- Usage: `./change cents`
- If incorrect number of arguments → print `Error` and return `1`.
- Use `atoi` to parse the argument.
- If the value is negative → print `0`.
- Allowed coin values: **25, 10, 5, 2, 1**.
- You may use unlimited coins.

**What I learned:**
How to implement a greedy algorithm with input validation and produce a result based on real-world constraints like coin denominations.

---

## Conclusion
This project strengthened my understanding of how programs interact with the command line. I learned to:

- Read and vats reserved.

# C - Functions, nested loops

## Table of Contents

- [About](#about)
- [Getting Started](#getting_started)
- [Usage](#usage)
- [Tasks](#tasks)
- [Learning Objectives](#learning_objectives)

## About <a name = "about"></a>

This project introduces the fundamental concepts of functions and nested loops in C programming. You will learn how to create custom functions, organize code efficiently, and use nested loops to solve complex problems. Understanding these concepts is crucial for writing modular, reusable, and maintainable code.

Functions allow you to break down complex programs into smaller, manageable pieces, while nested loops enable you to handle multi-dimensional iterations and create patterns. This project also covers the use of header files to declare function prototypes and the importance of code organization in C programming.

## Getting Started <a name = "getting_started"></a>

These instructions will help you compile and test the programs in this project on your local machine.

### Prerequisites

You need the following tools installed on your system:

```bash
gcc (GNU Compiler Collection) - version 4.8.4 or later
Ubuntu 20.04 LTS or similar Linux distribution
Betty linter for code style checking
```

Install required packages:

```bash
sudo apt-get update
sudo apt-get install gcc
sudo apt-get install build-essential
```

Install Betty linter:

```bash
git clone https://github.com/holbertonschool/Betty.git
cd Betty
sudo ./install.sh
```

### Installing

Follow these steps to compile and run the programs:

1. Clone the repository:

```bash
git clone https://github.com/Ali731-Amb/holbertonschool-low_level_programming.git
```

2. Navigate to the functions_nested_loops directory:

```bash
cd holbertonschool-low_level_programming/functions_nested_loops
```

3. Compile any C file with the required flags and include `_putchar.c`:

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 _putchar.c main.c filename.c -o output_name
```

4. Run the compiled program:

```bash
./output_name
```

The program will execute and display the output according to its specific functionality.

## Usage <a name = "usage"></a>

Each program in this directory demonstrates different aspects of functions and nested loops.

### Example 1: Print the alphabet in lowercase

```bash
gcc -Wall -pedantic -Werror -Wextra _putchar.c 1-main.c 1-alphabet.c -o alphabet
./alphabet
```

**Output:**
```
abcdefghijklmnopqrstuvwxyz
```

### Example 2: Print the alphabet 10 times

```bash
gcc -Wall -pedantic -Werror -Wextra _putchar.c 2-main.c 2-print_alphabet_x10.c -o alphabet_x10
./alphabet_x10
```

**Output:**
```
abcdefghijklmnopqrstuvwxyz
abcdefghijklmnopqrstuvwxyz
abcdefghijklmnopqrstuvwxyz
abcdefghijklmnopqrstuvwxyz
abcdefghijklmnopqrstuvwxyz
abcdefghijklmnopqrstuvwxyz
abcdefghijklmnopqrstuvwxyz
abcdefghijklmnopqrstuvwxyz
abcdefghijklmnopqrstuvwxyz
abcdefghijklmnopqrstuvwxyz
```

### Example 3: Check if character is lowercase

```bash
gcc -Wall -pedantic -Werror -Wextra _putchar.c 3-main.c 3-islower.c -o islower
./islower
```

**Output:**
```
1
0
1
```

### Example 4: Print the 9 times table

```bash
gcc -Wall -pedantic -Werror -Wextra _putchar.c 9-main.c 9-times_table.c -o times_table
./times_table
```

**Output:**
```
0,  0,  0,  0,  0,  0,  0,  0,  0,  0
0,  1,  2,  3,

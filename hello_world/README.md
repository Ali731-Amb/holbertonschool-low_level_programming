# C - Hello, World

## Table of Contents

- [About](#about)
- [Getting Started](#getting_started)
- [Usage](#usage)
- [Tasks](#tasks)
- [Learning Objectives](#learning_objectives)

## About <a name = "about"></a>

This is the introductory project to C programming at Holberton School. It covers the fundamental concepts of the C language, including the compilation process, basic syntax, and the first steps in writing C programs. You will learn how C code transforms from source files to executable programs through preprocessing, compilation, assembly, and linking.

This project introduces you to the gcc compiler, basic C syntax, and the classic "Hello, World!" program. Understanding these fundamentals is essential for all future C programming work, as they form the foundation of how C programs are created, compiled, and executed on Unix-like systems.

## Getting Started <a name = "getting_started"></a>

These instructions will help you set up your environment and compile your first C programs.

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

Follow these steps to get started with the project:

1. Clone the repository:

```bash
git clone https://github.com/Ali731-Amb/holbertonschool-low_level_programming.git
```

2. Navigate to the hello_world directory:

```bash
cd holbertonschool-low_level_programming/hello_world
```

3. Make your scripts executable (for shell scripts):

```bash
chmod +x 0-preprocessor
chmod +x 1-compiler
chmod +x 2-assembler
chmod +x 3-name
```

4. Run a script:

```bash
export CFILE=main.c
./0-preprocessor
```

5. For C programs, compile with gcc:

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 4-puts.c -o puts
./puts
```

The program will execute and display its output to the terminal.

## Usage <a name = "usage"></a>

This project contains both shell scripts and C programs that demonstrate different aspects of the compilation process and basic C programming.

### Example 1: Run the preprocessor

```bash
export CFILE=main.c
./0-preprocessor
ls
```

**Output:**
```
c  main.c  0-preprocessor
```

The file `c` contains the preprocessed output of `main.c`.

### Example 2: Compile without linking

```bash
export CFILE=main.c
./1-compiler
ls
```

**Output:**
```
main.c  main.o  1-compiler
```

The file `main.o` is the object file (compiled but not linked).

### Example 3: Generate assembly code

```bash
export CFILE=main.c
./2-assembler
ls
```

**Output:**
```
main.c  main.s  2-assembler
```

The file `main.s` contains the assembly language code.

### Example 4: Compile and name the executable

```bash
export CFILE=main.c
./3-name
ls
```

**Output:**
```
cisfun  main.c  3-name
```

The executable is named `cisfun` instead of the default `a.out`.

### Example 5: Print with puts

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 4-puts.c -o puts
./puts
```

**Output:**
```
"Programming is like building a multilingual puzzle
```

### Example 6: Print with printf

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 5-printf.c -o printf
./printf
```

**Output:**
```
with proper grammar, but the outcome is a piece of art,
```

(Note: The output has no newline at the end, so the prompt appears on the same line)

### Example 7: Print size of types

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 6-size.c -o size
./size
```

**Output (64-bit system):**
```
Size of a char: 1 byte(s)
Size of an int: 4 byte(s)
Size of a long int: 8 byte(s)
Size of a long long int: 8 byte(s)
Size of a float: 4 byte(s)
```

## Tasks <a name = "tasks"></a>

### 0. Preprocessor
**File:** `0-preprocessor`

Write a script that runs a C file through the preprocessor and save the result into another file.
- The C file name will be saved in the variable `$CFILE`
- The output should be saved in the file `c`

### 1. Compiler
**File:** `1-compiler`

Write a script that compiles a C file but does not link.
- The C file name will be saved in the variable `$CFILE`
- The output file should be named the same as the C file, but with the extension `.o` instead of `.c`
- Example: if the C file is `main.c`, the output file should be `main.o`

### 2. Assembler
**File:** `2-assembler`

Write a script that generates the assembly code of a C code and save it in an output file.
- The C file name will be saved in the variable `$CFILE`
- The output file should be named the same as the C file, but with the extension `.s` instead of `.c`
- Example: if the C file is `main.c`, the output file should be `main.s`

### 3. Name
**File:** `3-name`

Write a script that compiles a C file and creates an executable named `cisfun`.
- The C file name will be saved in the variable `$CFILE`

### 4. Hello, puts
**File:** `4-puts.c`

Write a C program that prints exactly `"Programming is like building a multilingual puzzle`, followed by a new line.
- Use the function `puts`
- You are not allowed to use `printf`
- Your program should end with the value `0`

### 5. Hello, printf
**File:** `5-printf.c`

Write a C program that prints exactly `with proper grammar, but the outcome is a piece of art,`, followed by a new line.
- Use the function `printf`
- You are not allowed to use the function `puts`
- Your program should return `0`
- Your program should compile without warning when using the `-Wall gcc` option

### 6. Size is not grandeur, and territory does not make a nation
**File:** `6-size.c`

Write a C program that prints the size of various types on the computer it is compiled and run on.
- You should produce the exact same output as in the example
- Warnings are allowed
- Your program should return `0`
- You might have to install the package `libc6-dev-i386` on your Linux to test the `-m32 gcc` option

### 7. Intel (Advanced)
**File:** `100-intel`

Write a script that generates the assembly code (Intel syntax) of a C code and save it in an output file.
- The C file name will be saved in the variable `$CFILE`
- The output file should be named the same as the C file, but with the extension `.s` instead of `.c`
- Example: if the C file is `main.c`, the output file should be `main.s`

### 8. UNIX is basically a simple operating system, but you have to be a genius to understand the simplicity (Advanced)
**File:** `101-quote.c`

Write a C program that prints exactly `and that piece of art is useful" - Dora Korpar, 2015-10-19`, followed by a new line, to the standard error.
- You are not allowed to use any functions listed in the NAME section of the man (3) `printf` or man (3) `puts`
- Your program should return `1`
- Your program should compile without any warnings when using the `-Wall gcc` option

## Learning Objectives <a name = "learning_objectives"></a>

By the end of this project, you should be able to explain the following concepts without external help:

### General
- Why C programming is awesome
- Who invented C
- Who are Dennis Ritchie, Brian Kernighan and Linus Torvalds
- What happens when you type `gcc main.c`
- What is an entry point
- What is `main`
- How to print text using `printf`, `puts` and `putchar`
- How to get the size of a specific type using the unary operator `sizeof`
- How to compile using `gcc`
- What is the default program name when compiling with `gcc`
- What is the official C coding style and how to check your code with `betty-style`
- How to find the right header to include in your source code when using a standard library function
- How does the `main` function influence the return value of the program

### The C Programming Language
C is a general-purpose programming language created by Dennis Ritchie at Bell Labs in the early 1970s. It is:
- A compiled language
- Portable across different platforms
- Efficient and close to hardware
- The basis for many modern languages (C++, Java, Python internals, etc.)
- Used for operating systems, embedded systems, and system programming

### The Compilation Process
When you compile a C program with `gcc main.c`, four main steps occur:

1. **Preprocessing** (`gcc -E`): Processes directives like `#include` and `#define`
2. **Compilation** (`gcc -S`): Translates C code to assembly language
3. **Assembly** (`gcc -c`): Converts assembly to machine code (object file)
4. **Linking** (`gcc`): Combines object files and libraries into an executable

### The main Function
The `main` function is the entry point of every C program:

```c
int main(void)
{
    return (0);
}
```

- Returns `0` to indicate success
- Returns non-zero to indicate an error
- The return value can be checked by the shell: `echo $?`

### printf vs puts
- **`printf`**: Formatted output, requires format specifiers
  ```c
  printf("Hello, %s!\n", "World");
  ```
- **`puts`**: Simpler, automatically adds newline
  ```c
  puts("Hello, World!");
  ```

### The sizeof Operator
The `sizeof` operator returns the size (in bytes) of a type or variable:

```c
printf("Size of int: %lu bytes\n", sizeof(int));
```

Note: The size can vary between systems (32-bit vs 64-bit).

## Requirements

### C Programs
- Allowed editors: `vi`, `vim`, `emacs`
- All files will be compiled on Ubuntu 20.04 LTS using `gcc` with the options `-Wall -Werror -Wextra -pedantic -std=gnu89`
- All files should end with a new line
- A `README.md` file at the root of the project folder is mandatory
- There should be no errors and no warnings during compilation
- You are not allowed to use `system`
- Your code should use the Betty style (checked with `betty-style.pl` and `betty-doc.pl`)

### Shell Scripts
- Allowed editors: `vi`, `vim`, `emacs`
- All your scripts will be tested on Ubuntu 20.04 LTS
- All your scripts should be exactly two lines long (`wc -l file` should print 2)
- All your files should end with a new line
- The first line of all your files should be exactly `#!/bin/bash`

## Compilation

Compile C files using:

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 filename.c -o output_name
```

### Compilation Flags Explained
- `-Wall`: Enable all warning messages
- `-Werror`: Treat all warnings as errors
- `-Wextra`: Enable extra warning flags
- `-pedantic`: Issue all warnings demanded by strict ISO C
- `-std=gnu89`: Use the GNU89 C standard

### Compilation Process Steps

**Preprocessing only:**
```bash
gcc -E main.c -o main.i
```

**Compile to assembly:**
```bash
gcc -S main.c -o main.s
```

**Compile to object file:**
```bash
gcc -c main.c -o main.o
```

**Full compilation (all steps):**
```bash
gcc main.c -o program_name
```

## Betty Style

To check your code style:

```bash
betty filename.c
```

Betty checks for:
- Proper indentation
- Function comments
- Line length (80 characters max)
- Brace placement
- Variable declarations
- And many more style rules

## Resources

To complete this project, you should read or watch:
- Everything you need to know to start with C
- Dennis Ritchie
- "C" Programming Language: Brian Kernighan
- Why C Programming Is Awesome
- Learning to program in C
- Understanding C program Compilation Process
- Betty Coding Style

## Author

**Ali Amb** - [Ali731-Amb](https://github.com/Ali731-Amb)

## Acknowledgments

- Holberton School for the project requirements and curriculum
- Dennis Ritchie for creating the C programming language
- Brian Kernighan and Dennis Ritchie for "The C Programming Language" book
- The Betty style guide maintainers


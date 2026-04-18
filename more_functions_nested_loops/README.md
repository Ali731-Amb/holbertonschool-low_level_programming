# C - More functions, more nested loops

![Project Badge](https://img.shields.io/badge/Progress-100%25-brightgreen)

**Level:** Novice
**Project:** Holberton School - Low Level Programming

---

## 📌 Description

This project deepens your understanding of C by introducing:

* Functions
* Nested loops
* Variable scope
* Header files and prototypes

You move from writing simple programs to structuring reusable logic through functions while respecting strict constraints (no standard library, limited `_putchar`, etc.).

---

## 🎯 Learning Objectives

At the end of this project, you should be able to explain:

### General

* What nested loops are and how to use them
* What a function is and how to use functions
* The difference between a function declaration and definition
* What a function prototype is
* Scope of variables
* GCC flags: `-Wall -Werror -pedantic -Wextra -std=gnu89`
* What header files are and how to use them with `#include`

---

## ⚙️ Requirements

* Allowed editors: `vi`, `vim`, `emacs`
* Compilation on **Ubuntu 20.04 LTS**
* Compiler: `gcc` with flags:
  `-Wall -Werror -Wextra -pedantic -std=gnu89`
* All files must end with a new line
* A `README.md` file is mandatory
* Code must follow **Betty style**
* No global variables allowed
* Maximum 5 functions per file
* No use of the standard library (`printf`, `puts`, etc. forbidden)
* `_putchar` is allowed
* Do not push `_putchar.c` (it will be provided)
* `main.c` files are for testing only and should not be pushed
* All function prototypes (including `_putchar`) must be in `main.h`
* You must push your `main.h` file

---

## ℹ️ More Info

You are **not required yet** to understand:

* Call by reference (addresses)
* Stack
* Static variables
* Recursion
* Arrays

---

## 📁 Repository Structure

```
holbertonschool-low_level_programming/
└── more_functions_nested_loops/
    ├── main.h
    ├── 0-isupper.c
    ├── 1-isdigit.c
    ├── 2-mul.c
    ├── 3-print_numbers.c
    ├── 4-print_most_numbers.c
    ├── 5-more_numbers.c
    ├── 6-print_line.c
    ├── 7-print_diagonal.c
    ├── 8-print_square.c
    ├── 9-fizz_buzz.c
    └── 10-print_triangle.c
```

---

## 🧩 Tasks

### 0. isupper

Check if a character is uppercase.

* Prototype: `int _isupper(int c);`
* Returns `1` if uppercase, `0` otherwise

---

### 1. isdigit

Check if a character is a digit (`0` to `9`).

* Prototype: `int _isdigit(int c);`
* Returns `1` if digit, `0` otherwise

---

### 2. Collaboration is multiplication

Multiply two integers.

* Prototype: `int mul(int a, int b);`

---

### 3. The numbers speak for themselves

Print numbers from `0` to `9`.

* Prototype: `void print_numbers(void);`
* Only `_putchar` allowed (max 2 calls)

---

### 4. I believe in numbers and signs

Print numbers from `0` to `9` except `2` and `4`.

* Prototype: `void print_most_numbers(void);`

---

### 5. Numbers constitute the only universal language

Print numbers from `0` to `14`, ten times.

* Prototype: `void more_numbers(void);`

---

### 6. The shortest distance between two points is a straight line

Draw a straight line using `_`.

* Prototype: `void print_line(int n);`
* Print `\n` if `n <= 0`

---

### 7. I feel like I am diagonally parked in a parallel universe

Draw a diagonal using `\`.

* Prototype: `void print_diagonal(int n);`

---

### 8. You are so much sunshine in every square inch

Print a square using `#`.

* Prototype: `void print_square(int size);`

---

### 9. Fizz-Buzz

Print numbers from 1 to 100:

* Multiples of 3 → `Fizz`
* Multiples of 5 → `Buzz`
* Multiples of both → `FizzBuzz`

---

### 10. Triangles

Print a triangle using `#`.

* Prototype: `void print_triangle(int size);`

---

## 🧠 Key Concepts

Focus on understanding:

* How nested loops build shapes (square, triangle, diagonal)
* Difference between **control flow** and **function abstraction**
* Why prototypes are required before compilation
* How scope affects variable visibility
* How to simulate `printf` behavior with `_putchar`
* Loop composition (loop inside loop)

---

## 🚀 Compilation Example

```
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 main.c file.c -o output
./output
```

---

## ❓ Questions to Guide Your Thinking

* Why must a function be declared before being used?
* What breaks if you forget to include `main.h`?
* How do you split a number like `14` into `1` and `4` without `printf`?
* How many loops are needed to draw a square vs a triangle?
* What is the minimal number of `_putchar` calls you can achieve?
* Where should variables be declared to avoid scope issues?

---

## 🏁 Goal

The objective is to move from writing simple scripts to structuring logic using functions and mastering nested loops, while respecting strict low-level constraints.

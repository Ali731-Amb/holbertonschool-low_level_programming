# C - Variadic functions

![Project Badge](https://img.shields.io/badge/Progress-100%25-brightgreen)

**Level:** Novice
**Project:** Holberton School - Low Level Programming

---

## 📌 Description

This project introduces **variadic functions**, a mechanism in C that allows functions to accept a variable number of arguments.

You will learn how functions like `printf` actually work internally, using:

* `va_start`
* `va_arg`
* `va_end`

You will also explore the importance of the `const` qualifier.

---

## 🎯 Learning Objectives

At the end of this project, you should be able to explain:

### General

* What variadic functions are
* How to use `va_start`, `va_arg`, and `va_end`
* Why and how to use the `const` type qualifier

---

## ⚙️ Requirements

### General

* Allowed editors: `vi`, `vim`, `emacs`
* Compilation on **Ubuntu 20.04 LTS**
* Compiler: `gcc` with flags:
  `-Wall -Werror -Wextra -pedantic -std=gnu89`
* All files must end with a new line
* A `README.md` file is mandatory
* Code must follow **Betty style**
* No global variables allowed
* Maximum 5 functions per file

### Restrictions

* Allowed standard functions: `malloc`, `free`, `exit`
* Forbidden: `printf`, `puts`, `calloc`, `realloc` (except where explicitly allowed)
* Allowed macros:

  * `va_start`
  * `va_arg`
  * `va_end`
* `_putchar` is allowed
* Do not push `_putchar.c`
* `main.c` files are for testing only
* All prototypes must be in `variadic_functions.h`
* Headers must be include guarded

---

## 📁 Repository Structure

```id="a9k3lm"
holbertonschool-low_level_programming/
└── variadic_functions/
    ├── variadic_functions.h
    ├── 0-sum_them_all.c
    ├── 1-print_numbers.c
    ├── 2-print_strings.c
    └── 3-print_all.c
```

---

## 🧩 Tasks

### 0. Beauty is variable, ugliness is constant

Return the sum of all parameters.

* Prototype:
  `int sum_them_all(const unsigned int n, ...);`

Constraint:

* If `n == 0`, return `0`

👉 Key idea: iterate over unnamed arguments.

---

### 1. To be is to be the value of a variable

Print numbers with a separator.

* Prototype:
  `void print_numbers(const char *separator, const unsigned int n, ...);`

Constraints:

* Use `printf`
* If `separator == NULL`, ignore it
* Always end with `\n`

---

### 2. One woman's constant is another woman's variable

Print strings with a separator.

* Prototype:
  `void print_strings(const char *separator, const unsigned int n, ...);`

Constraints:

* Use `printf`
* If a string is `NULL`, print `(nil)`
* Handle `separator == NULL`
* End with `\n`

---

### 3. To be is to be the value of a variable

Print anything based on a format string.

* Prototype:
  `void print_all(const char * const format, ...);`

Format specifiers:

* `c` → char
* `i` → int
* `f` → float
* `s` → string

Constraints:

* If string is `NULL`, print `(nil)`
* Ignore unknown specifiers
* No `for`, `goto`, `else`, ternary, `do...while`
* Max:

  * 2 `while` loops
  * 2 `if`
  * 9 variables
* Use `printf`
* End with `\n`

---

## 🧠 Key Concepts

Focus on understanding:

* A variadic function does **not know** how many arguments it receives unless you tell it
* `va_list` acts like an iterator over arguments
* `va_start` initializes access
* `va_arg` retrieves each argument
* `va_end` cleans up
* Why type safety is weaker in variadic functions
* Why the order and types of arguments must match expectations
* How `const` prevents accidental modification of data

---

## 🚀 Compilation Example

```id="z8x2pw"
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 main.c file.c -o output
./output
```

---

## ❓ Questions to Guide Your Thinking

* How does a function know how many arguments it received?
* What happens if you read a `va_arg` with the wrong type?
* Why is the first parameter often used as a “count” or “format”?
* What does `const char * const` really protect?
* Why is `printf` considered unsafe if misused?
* How would you debug a variadic function without type checking?

---

## 🏁 Goal

The objective is to understand how C handles flexible argument lists, and the trade-offs between flexibility and safety when working at a low level.


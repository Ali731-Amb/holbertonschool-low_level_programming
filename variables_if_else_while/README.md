# C - Variables, if, else, while

![Project Badge](https://img.shields.io/badge/Progress-100%25-brightgreen)

**Level:** Novice
**Author:** Julien Barbier
**Weight:** 1

---

## 📌 Description

This project introduces fundamental concepts of the C programming language. It focuses on variables, conditions, loops, and basic input/output using `printf` and `putchar`.

The goal is to build a solid understanding of data types, operators, control flow, and ASCII representation.

---

## 📚 Resources

You should read or watch:

* *Everything you need to know to start with C.pdf*
  Focus on:

  * Comments
  * Data types (integers)
  * Declarations
  * Characters
  * Arithmetic operators
  * Variable assignments
  * Comparisons
  * Logical operators
  * `if`, `if...else`
  * `while` loops

Additional topics:

* Keywords and identifiers
* Integers
* Arithmetic operators
* Relational operators
* Logical operators
* While loops
* ASCII table (`man ascii`)

---

## 🎯 Learning Objectives

By the end of this project, you should be able to explain:

* Arithmetic operators and how they work
* Logical (boolean) operators
* Relational operators
* TRUE and FALSE values in C
* How to use `if` and `if...else`
* How to write and use comments
* How to declare variables (`char`, `int`, `unsigned int`)
* How to assign values to variables
* How to print variables using `printf`
* How to use `while` loops
* How variables behave inside loops
* ASCII character set
* GCC flags `-m32` and `-m64`

---

## ⚙️ Requirements

* Allowed editors: `vi`, `vim`, `emacs`
* Compilation on **Ubuntu 20.04 LTS**
* Compiler: `gcc`
* Required flags: `-Wall -Werror -Wextra -pedantic -std=gnu89`
* All files must end with a new line
* No compilation warnings or errors
* You are not allowed to use `system`
* Code must follow **Betty style** (checked with `betty-style.pl` and `betty-doc.pl`)
* A `README.md` file must be present at the root

---

## 📁 Repository Structure

```
holbertonschool-low_level_programming/
└── variables_if_else_while/
    ├── 0-positive_or_negative.c
    ├── 1-last_digit.c
    ├── 2-print_alphabet.c
    ├── 3-print_alphabets.c
    ├── 4-print_alphabt.c
    ├── 5-print_numbers.c
    ├── 6-print_numberz.c
    ├── 7-print_tebahpla.c
    ├── 8-print_base16.c
    └── 9-print_comb.c
```

---

## 🧩 Tasks

### 0. Positive anything is better than negative nothing

Print whether a random number is positive, negative, or zero.

### 1. The last digit

Print the last digit of a number and classify it:

* greater than 5
* equal to 0
* less than 6 and not 0

### 2. Alphabet game

Print the lowercase alphabet using only `putchar`.

### 3. Alphabet soup

Print lowercase, then uppercase alphabet using only `putchar`.

### 4. Excluding letters

Print alphabet except `q` and `e`.

### 5. Numbers

Print digits from 0 to 9.

### 6. Numberz

Same as above but:

* no `char`
* only `putchar`

### 7. Reverse alphabet

Print alphabet in reverse.

### 8. Hexadecimal

Print:

```
0123456789abcdef
```

### 9. Combinations

Print:

```
0, 1, 2, 3, 4, 5, 6, 7, 8, 9
```

Constraints:

* ascending order
* correct formatting with comma + space

---

## 🧠 Key Concepts

Focus on understanding:

* Why `%` gives the last digit
* ASCII vs character representation
* How `while` loops evolve step by step
* Why `0` is FALSE and everything else is TRUE
* How to minimize `putchar` calls under constraints

---

## 🚀 Compilation Example

```
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 file.c -o output
./output
```

---

## ❓ Questions to Guide Your Thinking

* How do you transform an integer into a printable character?
* What happens if you pass a raw integer to `putchar`?
* How can a loop replace repeated `putchar` calls?
* Why does `% 10` work for negative numbers too?
* What edge cases should you test manually?

---

## 🏁 Goal

The objective is not just to complete tasks, but to understand how low-level logic works in C and build strong programming foundations.

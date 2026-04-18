# C - Pointers, arrays and strings

![Project Badge](https://img.shields.io/badge/Progress-100%25-brightgreen)

**Level:** Novice
**Project:** Holberton School - Low Level Programming

---

## 📌 Description

This project introduces one of the most important (and often misunderstood) concepts in C: **pointers**.
You will also work with:

* Arrays
* Strings
* Memory manipulation

The objective is to understand how data is stored and accessed in memory, and how to manipulate it efficiently.

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
* No use of standard library (`printf`, `puts`, etc.) unless explicitly allowed
* `_putchar` is allowed
* Do not push `_putchar.c`
* `main.c` files are only for testing
* All prototypes (including `_putchar`) must be in `main.h`
* You must push your `main.h`

---

## ℹ️ More Info

You do **not need yet** to understand:

* Function pointers
* Pointer to pointer
* Multidimensional arrays
* Arrays of structures
* `malloc` / `free`

---

## 📁 Repository Structure

```id="b8h7zt"
holbertonschool-low_level_programming/
└── pointers_arrays_strings/
    ├── main.h
    ├── 0-reset_to_98.c
    ├── 1-swap.c
    ├── 2-strlen.c
    ├── 3-puts.c
    ├── 4-print_rev.c
    ├── 5-rev_string.c
    ├── 6-puts2.c
    ├── 7-puts_half.c
    ├── 8-print_array.c
    ├── 9-strcpy.c
    └── 100-atoi.c
```

---

## 🧩 Tasks

### 0. 98 Battery st.

Update the value of an integer to `98` using a pointer.

* Prototype: `void reset_to_98(int *n);`

---

### 1. Don't swap horses in crossing a stream

Swap two integers using pointers.

* Prototype: `void swap_int(int *a, int *b);`

---

### 2. This report, by its very length, defends itself

Return the length of a string.

* Prototype: `int _strlen(char *s);`

---

### 3. I do not fear computers

Print a string followed by a new line.

* Prototype: `void _puts(char *str);`

---

### 4. I can only go one way

Print a string in reverse.

* Prototype: `void print_rev(char *s);`

---

### 5. A good engineer thinks in reverse

Reverse a string in place.

* Prototype: `void rev_string(char *s);`

---

### 6. Half the lies they tell about me aren't true

Print every other character of a string.

* Prototype: `void puts2(char *str);`

---

### 7. Winning is only half of it

Print the second half of a string.

* Prototype: `void puts_half(char *str);`

---

### 8. Arrays are not pointers

Print `n` elements of an integer array.

* Prototype: `void print_array(int *a, int n);`
* `printf` allowed

---

### 9. strcpy

Copy a string from `src` to `dest`.

* Prototype: `char *_strcpy(char *dest, char *src);`

---

### 10. _atoi

Convert a string to an integer.

* Prototype: `int _atoi(char *s);`

Constraints:

* Handle `+` and `-` signs
* Ignore non-digit characters before the number
* Return `0` if no number is found
* No `long`, no arrays, no hardcoding

---

## 🧠 Key Concepts

Focus on understanding deeply:

* What a pointer actually stores (an address, not a value)
* Difference between `*ptr` and `ptr`
* How strings are arrays of characters ending with `\0`
* Why modifying through a pointer changes the original variable
* Difference between copying a pointer and copying data
* Traversing a string with indexing vs pointer arithmetic
* Edge cases (empty string, negative numbers, odd length, etc.)

---

## 🚀 Compilation Example

```id="k3s1df"
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 main.c file.c -o output
./output
```

---

## ❓ Questions to Guide Your Thinking

* What is stored inside a pointer variable?
* What happens if you dereference an uninitialized pointer?
* Why does modifying `*n` change the original variable?
* How do you detect the end of a string without knowing its size?
* How would you reverse a string **without creating a new array**?
* What edge cases break `_atoi` easily?

---

## 🏁 Goal

The objective is to understand memory manipulation and build a mental model of how C handles data at a low level, especially through pointers and arrays.


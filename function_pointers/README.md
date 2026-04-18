# C - Function pointers

![Project Badge](https://img.shields.io/badge/Progress-100%25-brightgreen)

**Level:** Novice
**Project:** Holberton School - Low Level Programming

---

## 📌 Description

This project introduces **function pointers**, a powerful concept in C that allows you to:

* Pass functions as arguments
* Store functions inside variables
* Build flexible and reusable code

You move from manipulating data to manipulating **behavior**.

---

## 🎯 Learning Objectives

At the end of this project, you should be able to explain:

### General

* What function pointers are and how to use them
* What a function pointer actually holds
* Where a function pointer points in virtual memory

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

* Only allowed standard functions: `malloc`, `free`, `exit`
* Forbidden: `printf`, `puts`, `calloc`, `realloc`, etc.
* `_putchar` is allowed
* Do not push `_putchar.c`
* `main.c` files are for testing only
* Use your own `main.h` equivalent: `function_pointers.h`
* All prototypes must be inside `function_pointers.h`
* All headers must be **include guarded**

---

## 📁 Repository Structure

```id="g9l3fd"
holbertonschool-low_level_programming/
└── function_pointers/
    ├── function_pointers.h
    ├── 0-print_name.c
    ├── 1-array_iterator.c
    ├── 2-int_index.c
    ├── 3-main.c
    ├── 3-op_functions.c
    ├── 3-get_op_func.c
    └── 3-calc.h
```

---

## 🧩 Tasks

### 0. What's my name

Print a name using a function pointer.

* Prototype: `void print_name(char *name, void (*f)(char *));`

👉 Idea: You don’t decide *how* to print, you delegate it.

---

### 1. If you spend too much time thinking…

Apply a function to each element of an array.

* Prototype:
  `void array_iterator(int *array, size_t size, void (*action)(int));`

👉 Think: loop + behavior injection.

---

### 2. To hell with circumstances

Search for an element using a comparison function.

* Prototype:
  `int int_index(int *array, int size, int (*cmp)(int));`

Returns:

* Index of first match
* `-1` if none or invalid input

👉 You don’t define the condition, you receive it.

---

### 3. Simple calculator

Build a mini calculator using function pointers.

#### Files required:

##### `3-calc.h`

Define structure:

```id="9lqz6v"
typedef struct op
{
    char *op;
    int (*f)(int a, int b);
} op_t;
```

---

##### `3-op_functions.c`

Implement:

* Addition
* Subtraction
* Multiplication
* Division
* Modulo

---

##### `3-get_op_func.c`

Return the correct function based on operator.

Constraints:

* No `switch`
* No `for`
* No `do...while`
* No `goto`
* No `else`
* Max 1 `if`
* Max 1 `while`

Allowed variables only:

```id="1p0t0x"
op_t ops[] = {
    {"+", op_add},
    {"-", op_sub},
    {"*", op_mul},
    {"/", op_div},
    {"%", op_mod},
    {NULL, NULL}
};
int i;
```

---

##### `3-main.c`

* Only `main` function allowed
* No loops
* Max 3 `if`
* Use `atoi`
* Handle errors:

  * Wrong args → exit `98`
  * Invalid operator → exit `99`
  * Division by 0 → exit `100`

---

## 🧠 Key Concepts

Focus on understanding:

* A function pointer stores an **address of executable code**
* Difference between:

  * pointer to data
  * pointer to function
* How to call a function through a pointer
* Decoupling logic (what to do) from execution (when/how to do it)
* How structures can map symbols to functions
* Why this pattern is used in interpreters, callbacks, and APIs

---

## 🚀 Compilation Example

```id="m6s2fj"
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o output
./output
```

---

## ❓ Questions to Guide Your Thinking

* What is the exact type of `void (*f)(char *)`?
* What happens in memory when you pass a function as argument?
* Why can’t you treat a function pointer like a normal pointer?
* How do you “call” a function stored in a variable?
* Why is a struct useful in the calculator instead of multiple `if`?
* What breaks if your function pointer is `NULL`?

---

## 🏁 Goal

The objective is to understand how C can treat functions as data, enabling more flexible, modular, and extensible program design.


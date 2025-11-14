# More malloc, free

## Introduction

This project is part of the **Holberton School Low-Level Programming** curriculum.  
It focuses on **dynamic memory allocation in C**, an essential concept for efficient resource management and control over how data is stored and accessed.

Throughout this project, I implemented functions that replicate or extend the behavior of standard C library functions such as `malloc`, `calloc`, and `realloc`.  
The goal was to deepen my understanding of how memory works, how to allocate and free it properly, and how to handle allocation failures safely.

---

## Learning Objectives

By the end of this project, I was able to:

- Use the `exit` function to terminate a program with a specific status.
- Understand and implement the behavior of the standard functions `calloc` and `realloc`.
- Allocate, initialize, and manage memory dynamically.
- Handle allocation errors safely without causing undefined behavior.
- Follow strict coding and style requirements (Betty style, no global variables, limited functions per file).

---

## Requirements

**General Rules:**
- Allowed editors: `vi`, `vim`, `emacs`
- Compilation: Ubuntu 20.04 LTS using `gcc` with options:
  ```
  -Wall -Werror -Wextra -pedantic -std=gnu89
  ```
- Every file must end with a new line
- A `README.md` file is mandatory
- Code must follow the **Betty style**
- No global variables
- Maximum of **5 functions per file**
- Allowed standard library functions: `malloc`, `free`, and `exit`
- Functions like `printf`, `puts`, `calloc`, or `realloc` are **forbidden**
- `_putchar` is allowed
- All prototypes must be declared in a header file named `main.h`

---

## Tasks

### **0. Trust no one**

**File:** `0-malloc_checked.c`

**Description:**  
Write a function that allocates memory using `malloc`.

**Prototype:**
```c
void *malloc_checked(unsigned int b);
```

**Requirements:**
- Return a pointer to the allocated memory.
- If `malloc` fails, the function should terminate the process with a status value of `98`.

**What I learned:**  
I learned to handle memory allocation safely. Instead of letting the program crash or behave unexpectedly when `malloc` fails, the function must explicitly exit using `exit(98)`.  
This reinforced the importance of **error checking and graceful failure handling** in C.

---

### **1. string_nconcat**

**File:** `1-string_nconcat.c`

**Description:**  
Write a function that concatenates two strings.

**Prototype:**
```c
char *string_nconcat(char *s1, char *s2, unsigned int n);
```

**Requirements:**
- Return a pointer to a newly allocated space in memory.
- The new string should contain `s1`, followed by the first `n` bytes of `s2`, and should be null-terminated.
- If `n` is greater or equal to the length of `s2`, use the entire string `s2`.
- If `s1` or `s2` is `NULL`, treat them as empty strings.
- If the function fails, return `NULL`.

**What I learned:**  
I learned how to **manually concatenate strings** while managing memory correctly.  
This task helped me practice pointer arithmetic, null-termination, and safe handling of `NULL` inputs — all crucial when working with strings in C.

---

### **2. _calloc**

**File:** `2-calloc.c`

**Description:**  
Write a function that allocates memory for an array using `malloc`.

**Prototype:**
```c
void *_calloc(unsigned int nmemb, unsigned int size);
```

**Requirements:**
- Allocate memory for an array of `nmemb` elements, each of `size` bytes.
- Initialize the allocated memory to zero.
- If `nmemb` or `size` is `0`, return `NULL`.
- If `malloc` fails, return `NULL`.

**What I learned:**  
I learned how **`calloc`** works internally — it combines allocation and initialization in one step.  
This exercise improved my understanding of how arrays are represented in memory and how to manually set memory to zero using loops or pointer manipulation.

---

### **3. array_range**

**File:** `3-array_range.c`

**Description:**  
Write a function that creates an array of integers.

**Prototype:**
```c
int *array_range(int min, int max);
```

**Requirements:**
- The array should contain all values from `min` (included) to `max` (included), ordered from smallest to largest.
- If `min > max`, return `NULL`.
- If memory allocation fails, return `NULL`.

**What I learned:**  
I learned how to **dynamically create and populate arrays** using loops and `malloc`.  
This helped me understand how to generate a range of integers efficiently and how to deal with edge cases like invalid ranges or failed allocations.

---

## Overall Knowledge Gained

Through this project, I developed a solid understanding of:

- How **dynamic memory allocation** works in C.
- The correct use of `malloc`, `free`, and `exit`.
- How to handle and prevent **memory leaks** and **invalid pointer access**.
- How to design functions that manage memory safely and predictably.
- The difference between stack and heap memory.
- Writing clean, modular, and standard-compliant C code.

---

## Conclusion

This project gave me practical experience with **manual memory management** in C — one of the most fundamental and challenging aspects of systems programming.  
By implementing my own versions of allocation functions, I gained insight into how they work internally and how to avoid common pitfalls such as segmentation faults and memory leaks.  

Mastering these concepts is a key step toward understanding more advanced topics like data structures, dynamic arrays, and memory optimization in low-level programming.

---


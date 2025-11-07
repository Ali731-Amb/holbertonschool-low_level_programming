# Holberton School - Low Level Programming

## Table of Contents

- [About](#about)
- [Getting Started](#getting_started)
- [Usage](#usage)
- [Projects](#projects)
- [Contributing](../CONTRIBUTING.md)

## About <a name = "about"></a>

This repository contains all projects and exercises completed as part of the Low-Level Programming curriculum at Holberton School. The primary focus is on learning the C programming language, understanding computer architecture, memory management, data structures, and algorithms at a fundamental level.

These projects build a strong foundation in systems programming, covering topics from basic syntax and control structures to advanced concepts like dynamic memory allocation, file I/O, data structures (linked lists, hash tables, binary trees), and algorithm design. Each project is designed to deepen understanding of how software interacts with hardware and to develop problem-solving skills essential for software engineering.

## Getting Started <a name = "getting_started"></a>

These instructions will get you a copy of the project up and running on your local machine for development and testing purposes.

### Prerequisites

To compile and run the programs in this repository, you need:

- **GCC (GNU Compiler Collection)** - version 4.8.4 or later
- **Ubuntu 20.04 LTS** or similar Linux distribution
- **Betty linter** - for code style checking
- **Git** - for version control

Install the required packages:

```bash
sudo apt-get update
sudo apt-get install gcc
sudo apt-get install git
```

Install Betty (Holberton's C code style checker):

```bash
git clone https://github.com/holbertonschool/Betty.git
cd Betty
sudo ./install.sh
```

### Installing

Follow these steps to get a development environment running:

1. Clone the repository to your local machine:

```bash
git clone https://github.com/Ali731-Amb/holbertonschool-low_level_programming.git
```

2. Navigate to the project directory:

```bash
cd holbertonschool-low_level_programming
```

3. Choose a specific project directory (e.g., hello_world):

```bash
cd 0x00-hello_world
```

4. Compile a C file using GCC:

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 0-main.c 0-positive_or_negative.c -o output
```

5. Run the compiled program:

```bash
./output
```

The program will execute and display the output based on the project requirements.

## Usage <a name = "usage"></a>

Each directory in this repository represents a different project or concept in low-level programming. To use any project:

1. Navigate to the specific project directory
2. Read the README.md file in that directory for specific instructions
3. Compile the C files using the compilation flags specified in the project requirements
4. Execute the compiled binary

**Example - Compiling and running a simple program:**

```bash
cd 0x00-hello_world
gcc -Wall -Werror -Wextra -pedantic 4-puts.c -o hello
./hello
```

**Expected output:**
```
"Programming is like building a multilingual puzzle
```

**Checking code style with Betty:**

```bash
betty filename.c
```

Ensure all your code passes Betty style checks before submission.

## Projects <a name = "projects"></a>

The repository is organized into directories, each representing a specific learning objective:

- **0x00-hello_world** - Introduction to C, compilation process, basic output
- **0x01-variables_if_else_while** - Variables, conditionals, loops
- **0x02-functions_nested_loops** - Functions, nested loops, header files
- **0x03-debugging** - Debugging techniques and tools
- **0x04-more_functions_nested_loops** - Advanced function concepts
- **0x05-pointers_arrays_strings** - Introduction to pointers and arrays
- **0x06-pointers_arrays_strings** - More on pointers, arrays, and strings
- **0x07-pointers_arrays_strings** - Even more pointers, arrays, and strings
- **0x08-recursion** - Recursive functions
- **0x09-static_libraries** - Creating and using static libraries
- **0x0A-argc_argv** - Command line arguments
- **0x0B-malloc_free** - Dynamic memory allocation
- **0x0C-more_malloc_free** - Advanced dynamic memory allocation
- **0x0D-preprocessor** - C preprocessor directives
- **0x0E-structures_typedef** - Structures and typedef
- **0x0F-function_pointers** - Function pointers
- **0x10-variadic_functions** - Variadic functions
- **0x12-singly_linked_lists** - Singly linked lists
- **0x13-more_singly_linked_lists** - More operations on linked lists
- **0x14-bit_manipulation** - Bit manipulation operations
- **0x15-file_io** - File input/output operations
- **0x17-doubly_linked_lists** - Doubly linked lists
- **0x18-dynamic_libraries** - Creating and using dynamic libraries
- **0x1A-hash_tables** - Hash tables implementation
- **0x1C-makefiles** - Creating Makefiles
- **0x1E-search_algorithms** - Search algorithms (linear, binary, etc.)

Each project directory contains its own README with detailed requirements, learning objectives, and usage examples.

## Author

**Ali Amb** - [Ali731-Amb](https://github.com/Ali731-Amb)

## Acknowledgments

- Holberton School for the curriculum and project guidelines
- All peers and mentors who provided support throughout the learning process
- The open-source community for tools and resources

## License

This project is part of the Holberton School curriculum. All rights reserved.

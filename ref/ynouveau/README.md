*This project has been created as part of the 42 curriculum by ynouveau*

<div align="center">

# 📚 Libft

### A personal C library built from scratch.

![Language](https://img.shields.io/badge/language-C-blue)
![42](https://img.shields.io/badge/42-Libft-black)
![Norm](https://img.shields.io/badge/42%20Norm-compliant-success)

</div>

---

## Table of Contents

* [Description](#description)
* [Library Overview](#library-overview)

  * [Character Classification and Conversion](#character-classification-and-conversion)
  * [String Functions](#string-functions)
  * [Memory Functions](#memory-functions)
  * [Conversion and Allocation](#conversion-and-allocation)
  * [Additional Utility Functions](#additional-utility-functions)
  * [File Descriptor Functions](#file-descriptor-functions)
  * [Linked List Functions](#linked-list-functions)
* [Instructions](#instructions)

  * [Compilation](#compilation)
  * [Testing](#testing)
  * [Writing Additional Tests](#writing-additional-tests)
  * [Usage](#usage)
* [Resources](#resources)

---

# Description

**Libft** is a project that consists of creating a personal C library containing a collection of commonly used utility functions.

The project begins by recreating a selection of functions from the standard C library (`libc`) in order to better understand how they work internally. It then expands the library with additional functions for string manipulation, memory allocation, output, and linked-list management.

The main goal of the project is not simply to reproduce existing functions, but to develop a stronger understanding of fundamental programming concepts such as:

* Memory management
* Pointers
* Strings and arrays
* Character manipulation
* Dynamic allocation
* Data structures
* Function behaviour and edge cases

For functions that have an equivalent in the standard C library, the `libft` implementation is intended to reproduce the behaviour of its `libc` counterpart as closely as required by the project subject.

Unless explicitly required by a function's specification, functions generally assume that valid arguments are provided.

> In short: if the subject does not require me to defend against chaos, I assume chaos was not invited and proceed with the cleansing of these heretic thoughts.

---

# Library Overview

The library is composed of functions from several categories.

Refer to `libft.h` or any of the `ft_*.c` source files for more information about each functions. The **man** and/or instructions from **Libft's subject** are included in every source files.

## Character Classification and Conversion

These functions check character properties or convert characters between cases.

| Function     | Description                                                    |
| ------------ | -------------------------------------------------------------- |
| `ft_isalpha` | Checks whether a character is alphabetic.                      |
| `ft_isdigit` | Checks whether a character is a decimal digit.                 |
| `ft_isalnum` | Checks whether a character is alphanumeric.                    |
| `ft_isascii` | Checks whether a character belongs to the ASCII character set. |
| `ft_isprint` | Checks whether a character is printable.                       |
| `ft_toupper` | Converts a lowercase character to uppercase.                   |
| `ft_tolower` | Converts an uppercase character to lowercase.                  |

---

## String Functions

Functions used to inspect, manipulate, and compare C strings.

| Function     | Description                                                    |
| ------------ | -------------------------------------------------------------- |
| `ft_strlen`  | Calculates the length of a string.                             |
| `ft_strlcpy` | Copies a string into a buffer with size protection.            |
| `ft_strlcat` | Appends a string to another buffer with size protection.       |
| `ft_strchr`  | Finds the first occurrence of a character in a string.         |
| `ft_strrchr` | Finds the last occurrence of a character in a string.          |
| `ft_strncmp` | Compares two strings up to a given number of characters.       |
| `ft_strnstr` | Searches for a substring within a limited portion of a string. |
| `ft_strdup`  | Allocates and duplicates a string.                             |

---

## Memory Functions

Functions used to initialise, copy, search, compare, and manipulate blocks of memory.

| Function     | Description                                              |
| ------------ | -------------------------------------------------------- |
| `ft_memset`  | Fills a memory area with a byte value.                   |
| `ft_bzero`   | Sets a block of memory to zero.                          |
| `ft_memcpy`  | Copies memory from one location to another.              |
| `ft_memmove` | Copies memory while safely handling overlapping regions. |
| `ft_memchr`  | Searches for a byte inside a memory area.                |
| `ft_memcmp`  | Compares two memory areas.                               |
| `ft_calloc`  | Allocates and zero-initialises memory.                   |

---

## Conversion

Functions that convert between representations.

| Function    | Description                                                   |
| ----------- | ------------------------------------------------------------- |
| `ft_atoi`   | Converts a string representation of a number into an integer. |
| `ft_itoa`   | Converts an integer into a newly allocated string.            |


---

## Additional Utility Functions

Additional functions implemented as part of the project.

| Function      | Description                                                                 |
| ------------- | --------------------------------------------------------------------------- |
| `ft_substr`   | Extracts a substring from a string.                                         |
| `ft_strjoin`  | Concatenates two strings into a newly allocated string.                     |
| `ft_strtrim`  | Removes specified characters from the beginning and end of a string.        |
| `ft_split`    | Splits a string into an array of substrings.                                |
| `ft_strmapi`  | Applies a function to every character of a string and returns a new string. |
| `ft_striteri` | Applies a function to every character of a string in place.                 |

---

## File Descriptor Functions

These functions write characters, strings, and numbers to a specified file descriptor.

| Function        | Description                                                 |
| --------------- | ----------------------------------------------------------- |
| `ft_putchar_fd` | Writes a character to a file descriptor.                    |
| `ft_putstr_fd`  | Writes a string to a file descriptor.                       |
| `ft_putendl_fd` | Writes a string followed by a newline to a file descriptor. |
| `ft_putnbr_fd`  | Writes an integer to a file descriptor.                     |

---

## Linked List Functions

The bonus part of the project introduces a simple singly linked-list data structure.

| Function          | Description                                             |
| ----------------- | ------------------------------------------------------- |
| `ft_lstnew`       | Creates a new linked-list node.                         |
| `ft_lstadd_front` | Adds a node to the beginning of a list.                 |
| `ft_lstsize`      | Counts the number of nodes in a list.                   |
| `ft_lstlast`      | Returns the last node of a list.                        |
| `ft_lstadd_back`  | Adds a node to the end of a list.                       |
| `ft_lstdelone`    | Deletes a single node and its content.                  |
| `ft_lstclear`     | Deletes and frees an entire list.                       |
| `ft_lstiter`      | Applies a function to every node in a list.             |
| `ft_lstmap`       | Creates a new list by applying a function to each node. |

---

# Instructions

## Compilation

Compile using `make`

```sh
make
```

This generates the static library:

```text
libft.a
```

The following Makefile rules arealso be available:

```sh
make $(NAME)
make clean
make fclean
make re
```

---

## Testing

Testing was primarily performed using external test suites in addition to manual testing. The manual tests not provided because of a strong case of *i-don't-want-to-blow-up-my-tests-for-norminette-phobia*. 

### Tripouille's libftTester

[Tripouille's libftTester](https://github.com/Tripouille/libftTester?utm_source=chatgpt.com)

This test suite provides extensive coverage for the functions required by the project and includes memory leak checks.

To install it:

```sh
# Go to the libft directory
cd libft

# Clone the tester
git clone https://github.com/Tripouille/libftTester.git

# Enter the tester directory
cd libftTester
```

Run the complete test suite:

```sh
make m
```

Or run a specific test:

```sh
make atoi
```

The command above, for example, runs the tests for `ft_atoi`.

> **Note**
>
> If `libftTester` is located somewhere other than inside the `libft` directory, the `LIBFT_PATH` variable in the tester's `Makefile` must be updated accordingly.

---

### Nuno-Jesus's libft_file_checker

[Nuno-Jesus's libft_file_checker](https://github.com/Nuno-Jesus/libft_file_checker?utm_source=chatgpt.com)

This checker complements functional test suites by checking the project's structure and required files.

Among other things, it can detect:

* Missing functions
* Incorrect function prototypes
* Issues with `libft.h`
* Forbidden files

To install and run it:

```sh
# Go to libft's parent directory
git clone https://github.com/Nuno-Jesus/libft_file_checker.git

cd libft_file_checker

python3 main.py
```

Alternatively:

```sh
make
```

Because the checker is written in Python, Python must be installed on the machine running it.

If the checker is moved elsewhere, update the path to `libft` inside `utils.py`:

```py
path = '../libft/'
```

---

## Writing Additional Tests

The external test suites already cover many common and edge cases, but writing additional tests remains useful when investigating specific behaviour.

Additional tests for Tripouille's tester can be added inside:

```text
libftTester/tests
```

The `ft_*_test.cpp` files provide a convenient starting point for adding new cases without having to build an entire testing framework from scratch.

Because finding a bug is nice.

Finding the same bug again after thinking you fixed it? Character development.

---

## Usage

After compiling `libft`, the generated static library can be linked with another C project.

Example:

```c
#include "libft/libft.h"

int	main(void)
{
	ft_putstr_fd("Hello, world!\n", 1);
	return (0);
}
```

Compile it with:

```sh
cc main.c libft/libft.a -o hello_world
```

Then run:

```sh
./hello_world
```

Output:

```text
Hello, world!
```

Et voilà. ✨

Congratulation, you've compiled my libft. Amazing. 👏

---

# Resources

The following resources were used throughout the project:

### Documentation

* [Linux manual pages](https://man7.org/linux/man-pages/) : The only source of truth

The `man` pages were particularly useful for understanding the expected behaviour, prototypes, and edge cases of functions with equivalents in the standard C library.

### Testing Resources

* [Tripouille's libftTester](https://github.com/Tripouille/libftTester?utm_source=chatgpt.com)
* [Nuno-Jesus's libft_file_checker](https://github.com/Nuno-Jesus/libft_file_checker?utm_source=chatgpt.com)

Inspecting the implementation of tests and comparing expected behaviour with the implementation was particularly useful when debugging failing cases.

---

## AI Usage

AI-assisted tools were used as a learning and debugging aid during this project.

AI was primarily used for:

* Explaining C concepts that were not clear
* Helping interpret compiler errors and debugging output
* Analysing failing test cases
* Reviewing code and identifying potential issues
* Explaining memory-related bugs when provided with sufficient context
* Assisting with documentation and README writing (This literally :P)

AI was not treated as a replacement for understanding the code. When using AI for debugging, the most useful results came from providing the implementation, the failing test case, the observed behaviour, and any relevant compiler or memory-checking output.

This made it possible to use AI as a tool for investigation rather than blindly applying generated fixes.

---

<div align="center">

### The Libft Development Cycle

```text
Write code
↓
Compile
↓
Test
↓
Segfault
↓
Inspect everything
↓
Find the bug
↓
Fix the bug
↓
Create a new bug somewhere else
↓     or     ↓     
99% Repeat | 1% Read the man
↓
Success iff you read the man
```

**Read the documentation. Test everything. Break everything. Fix everything.**

And when all else fails:

```text
1. Have you tried printing the pointer?
---------------------------------------

2. Pray the Omnissiah:
----------------------
"There is no truth in flesh, only betrayal.
There is no strength in flesh, only weakness.
There is no constancy in flesh, only decay.
There is no certainty in flesh, but death."

3. Turn to Gork and Mork for guidance
-------------------------------------
```

So all that, and spending time pestering my neighbours about their ugly broken implementations and teaching them the way of the righteous truth.

</div>

On that note, stay hydrated folks.
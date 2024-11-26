# ft_printf

## Summary
The goal of this project is pretty straightforward: you will recode `printf()`.

Version: 10

---

## Contents

1. [Introduction](#introduction)  
2. [Common Instructions](#common-instructions)  
3. [Mandatory Part](#mandatory-part)  
4. [Bonus Part](#bonus-part)  
5. [Submission and Peer-Evaluation](#submission-and-peer-evaluation)  

---

## Chapter I: Introduction

You will discover a popular and versatile C function: `printf()`. This exercise is a great opportunity to improve your programming skills. It is of moderate difficulty.

You will discover variadic functions in C.

The key to a successful `ft_printf` is a well-structured and extensible code.

Once this assignment is passed, you will be allowed to add your `ft_printf()` to your `libft` so you can use it in your school C projects.

---

## Chapter II: Common Instructions

- Your project must be written in C.
- Your project must be written in accordance with the Norm. If you have bonus files/functions, they are included in the Norm check, and you will receive a `0` if there is a Norm error.
- Your functions should not quit unexpectedly (segmentation fault, bus error, double free, etc.) apart from undefined behaviors. If this happens, your project will be considered non-functional and will receive a `0` during evaluation.
- All heap-allocated memory space must be properly freed when necessary. No leaks will be tolerated.
- If the subject requires it, you must submit a Makefile that compiles your source files to the required output with the flags `-Wall`, `-Wextra`, and `-Werror`. Use `cc`, and your Makefile must not relink.
- Your Makefile must at least contain the rules `$(NAME)`, `all`, `clean`, `fclean`, and `re`.
- To include bonuses, your Makefile must include a `bonus` rule. Bonuses must be in different files `_bonus.{c/h}` if not specified otherwise.
- If allowed to use `libft`, copy its sources and Makefile into a `libft` folder. The project’s Makefile must compile the library using its Makefile.
- You are encouraged to create test programs for your project to help during your defense. Tests will not be submitted or graded.
- Submit your work to the assigned git repository. Only the work in the repository will be graded.

---

## Chapter III: Mandatory Part

**Program Name**: `libftprintf.a`  
**Turn-in Files**: `Makefile`, `*.h`, `*/*.h`, `*.c`, `*/*.c`  
**Makefile**: `NAME`, `all`, `clean`, `fclean`, `re`  
**External Functions**: `malloc`, `free`, `write`, `va_start`, `va_arg`, `va_copy`, `va_end`  
**Libft Authorized**: Yes  

### Description

Write a library that contains `ft_printf()`, a function that mimics the original `printf()`.

**Prototype**:
```c
int ft_printf(const char *, ...);
```

#### Requirements:
- Don’t implement the buffer management of the original `printf()`.
- Handle the following conversions:
  - `%c`: Prints a single character.
  - `%s`: Prints a string.
  - `%p`: Prints a pointer in hexadecimal format.
  - `%d`: Prints a decimal number (base 10).
  - `%i`: Prints an integer (base 10).
  - `%u`: Prints an unsigned decimal number.
  - `%x`: Prints a number in lowercase hexadecimal (base 16).
  - `%X`: Prints a number in uppercase hexadecimal (base 16).
  - `%%`: Prints a percent sign.
- Use `ar` to create your library. Using `libtool` is forbidden.
- The library `libftprintf.a` must be created at the root of your repository.

---

# Bonus

## Chapter IV: Bonus Part

### Bonus List:
- Manage any combination of the following flags: `'-0.'` and field minimum width under all conversions.
- Manage all the following flags: `'# +'` (Yes, one of them is a space).

#### Notes:
- The bonus part will only be evaluated if the mandatory part is **perfect** (i.e., integrally done and works without malfunctioning).
- Plan for extra features from the start to avoid a naive implementation approach.

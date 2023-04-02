# 0x03. C - Debugging :toolbox:

Debugging is the process of finding and fixing errors in software that prevents it from running correctly. As you become a more advanced programmer and an industry engineer, you will learn how to use debugging tools such as `gdb` or built-in tools that IDEs have. However, it’s important to understand the concepts and processes of debugging manually.

This project generally teaches;
- What is debugging
- What are some methods of debugging manually
- How to read the error messages.

## Requirements :pushpin:

**General**

- Allowed editors: `vi`, `vim`, `emacs`
- All files are compiled on Ubuntu 20.04 LTS using `gcc`, using the options `-Wall -Werror -Wextra -pedantic -std=gnu89`
- All files end with a new line
- The code use the `Betty` style. It has being checked using `betty-style.pl` and `betty-doc.pl`
- A [README.md](../README.md) file at the root of the repo, that contain a description of the repository
- A [README.md](./README.md) file, at the root of the folder of this project (i.e. `0x03-debugging`),that describe what this project is about

## test :file_folder:
- [test](./test): Folder that contain test files (`man.c` files). Provided by Alx

## Tasks :page_with_curl:

**0. Multiple mains**
- [0-main.c](./0-main.c): C file that tests that the function `positive_or_negative()` gives the correct output when given a case of `0` based on [main.c](./test/main.c).
  - The function can be compiled by adopting [0x01. C - Variables, if, else, while - Task #0](../0x01-variables_if_else_while/0-positive_or_negative.c) function with the `0-main.c` to test locally.
  - only `0-main.c` and [main.h](./main.h) is uploaded here for this task while Alx uses it's `positive_or_negative()` function.
  - only one line of the given [main.c](./test/main.c) is changed for the `0-main.c` files

**1. Like, comment, subscribe**
- [1-main.c](./1-main.c): the copy of the given file [1-main.c](./test/1-main.c) after the part of the code that is causing the output to go into an infinite loop was commented out.
  - the task is not compiled with `-Wall -Werror -Wextra -pedantic` options.

**2. 0 > 972?**
- [2-largest_number.c](./2-largest_number.c): C program that fixes the given code in [2-largest_number.c](./test/2-largest_number.c) so that it correctly prints out the largest of three numbers, no matter the case.
  - line count was not considered for this task
  - the [2-main.c](./test/2-main.c) can be use to test the program locally

**3. Leap year**
- [3-print_remaining_days.c](./3-print_remaining_days.c): C program that converts a date to the day of year and determines how many days are left in the year, taking leap year into consideration.
  - It fixes the given function `print_remaining_days()` of the [3-print_remaining_days.c](./test/3-print_remaining_days.c) so that the output works correctly for all dates and all leap years.
  - line count was not considered
  - It is assume that all test cases have valid months (i.e. the value of `month` will never be less than `1` or greater than `12`) and valid days (i.e. the value of `day` will never be less than `1` or greater than `31`).
  - It can be assumed that all test cases have valid `month`/`day` combinations (i.e. there will never be a `June` `31st` or `November` `31st`, etc.), but not all `month`/`day`/`year` combinations are valid (i.e. `February` `29`, `1991` or `February` `29`, `2427`).
  - the [3-main_a.c](./test/3-main_a.c) first main function for `3-convert_day.c` and `3-print_remaining_days.c` testing
  - the [3-convert_day.c](./3-convert_day.c) a given file that takes a date and prints how many days are left in the year, taking.

## Header fule :clipboard:
- [main.h](./main.h): header file containing all function prototypes used in some tasks of the project.

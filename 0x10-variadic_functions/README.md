# C - Variadic functions

The project generally teaches:
* What are variadic functions
* How to use `va_start`, `va_arg` and `va_end` macros
* Why and how to use the `const` type qualifier.

## Tasks

* **0. Beauty is variable, ugliness is constant**
  * [0-sum_them_all.c](0-sum_them_all.c): C function that returns the sum of all its parameters.
	  * The function returns `0` If `n == 0`.
* **1. To be is to be the value of a variable**
  * [1-print_numbers.c](1-print_numbers.c): C function that prints numbers, followed by a new line.
	  * the parameter `separator` is the string to be printed between numbers
		* and parameter `n` is the number of integers passed to the function
		* the use of `printf` in writing the function was allowed.
		* it does not print if `separator` is `NULL`.
		* it prints a new line at the end of the function.
* **2. One woman's constant is another woman's variable**
  * [2-print_strings.c](2-print_strings.c): C function that prints strings, followed by a new line.
	  * The parameter `separator` is the string to be printed between the strings
		* `n` is the number of strings passed to the function.
		* the use of `printf` in writing the function was allowed.
		* the function does not print if `separator` is `NULL`.
		* It prints `(nil)` if one of the string is `NULL`.
		* it prints a new line at the end of the function.
* **3. To be is a to be the value of a variable**
  * [3-print_all.c](3-print_all.c): C function that prints anything.
	  * The parameter `format` is a list of types of arguments passed to the function (`c`: `char`, `i`: `integer`, `f`: `float`, `s`: `char *`(if the string is `NULL`,it prints `(nil)` instead)).
		* it ignores any other character
		* the use of `for`, `goto`, ternary operator, `else`, `do ... while` were allowed.
		* Only 2 maximum of `while`loops  and `if` was allowed.
		* Only `9` maximum of variable declaration was allowed
		* the use of `printf` was allowed.
		* A new line is printed at the end of the function.

## Header file

* [variadic_functions.h](variadic_functions.h): Header file containing all the function prototypes, all type definations and the function  `_putchar` used in the project.

|File|Defination/Prototype|
|----|--------------------|
|`0-sum_them_all.c`|`int sum_them_all(const unsigned int n, ...);`|
|`1-print_numbers.c`|`void print_numbers(const char *separator, const unsigned int n, ...);`|
|`2-print_strings.c`|`void print_strings(const char *separator, const unsigned int n, ...);`|
|`3-print_all.c`|`void print_all(const char * const format, ...);`|
|`_putchar. c`|`int _putchar(char c);`|

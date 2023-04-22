# 0x04. C - More functions, more nested loops:loop:

**INTRODUCTION**
The project highlights the importance of understanding various concepts and techniques in C programming. It provides an overview of nested loops, functions, function declaration and definition, function prototypes, variable scope, `gcc` compiler flags `-Wall -Werror -pedantic -Wextra -std=gnu89`, and header files and how to use them with `#include`.
By mastering these concepts, complex programming projects can be tackled with confidence.

## Resources:books:

- [Nested while loops](https://youtu.be/Z3iGeQ1gIss)
- [C - Functions](http://www.tutorialspoint.com/cprogramming/c_functions.htm)
- [Learning to Program in C (Part 06)](https://youtu.be/qMlnFwYdqIw)(for this project, stop at 14:00)
- [What is the purpose of a function prototype?](https://www.geeksforgeeks.org/what-is-the-purpose-of-a-function-prototype/)
- [C - Header Files](https://www.tutorialspoint.com/cprogramming/c_header_files.htm)(stop before the “Once-Only Headers” paragraph)

## Requirements:pushpin:

**General**
- Allowed editors: `vi`, `vim`, `emacs`
- All files will be compiled on Ubuntu 20.04 LTS using `gcc`, using the options `-Wall -Werror -Wextra -pedantic -std=gnu89`
- All files should end with a new line
- A mandatory [README.md](./README.md) file, at the root of the folder of the project is provided
- The code should use the `Betty style`. It may be checked using `betty-style.pl` and `betty-doc.pl`
- It is not allowed to use global variables
- No more than 5 functions per file
- It is not allowed to use the standard library. Any use of functions like `printf`, `puts`, etc… is forbidden
- It is allowed to use `_putchar`
- The prototypes of all functions and the prototype of the function `_putchar` has been included in header file called `main.h` as required

## Tasks:page_with_curl:

**0. isupper**
- [0-isupper.c](./0-isupper.c): function that checks for uppercase character.
  - It returns `1` if `c` is uppercase and `0` otherwise

**1. isdigit**
- [1-isdigit.c](./1-isdigit.c):function that checks for a digit (`0` through `9`).
  - It returns `1` if `c` is a digit and `0` otherwise

**2. Collaboration is multiplication**
- [2-mul.c](./2-mul.c): function that multiplies two integers.

**3. The numbers speak for themselves**
- [3-print_numbers.c](./3-print_numbers.c):function that prints the numbers, from `0` to `9`, followed by a new line.
  - It requires the use of `_putchar` function Only.

**4. I believe in numbers and signs**
- [4-print_most_numbers.c](./4-print_most_numbers.c): function that prints the numbers, from `0` to `9`, followed by a new line.
  - It does nor print `2` and `4`
  - It does not use `_putchar` function more than two times.

**5. Numbers constitute the only universal language**
- [5-more_numbers.c](./5-more_numbers.c): function that prints `10` times the numbers, from `0` to `14`, followed by a new line.
  - It uses the `_putchar` function not more than three times.

**6. The shortest distance between two points is a straight line**
- [6-print_line.c](./6-print_line.c): function that draws a straight line in the terminal.
  - It uses `_putchar` function only
  - the parameter `n` is the number of times the character `_` should be printed
  - line ends with a `\n`
  - If `n` is `0` or less, the function prints `\n` only.

**7. I feel like I am diagonally parked in a parallel universe**
- [7-print_diagonal.c](./7-print_diagonal.c): function that draws a diagonal line on the terminal.
  - It only uses the `_putchar` function to print
  - the parameter `n` is the number of times the character `\` should be printed
  - The diagonal ends with a `\n`
  - If `n` is `0` or less, the function prints `\n` only.

**8. You are so much sunshine in every square inch**
- [8-print_square.c](./8-print_square.c): function that prints a square, followed by a new line.
  - It only uses `_putchar` function to print
  - the parameter `size` is the size of the square
  - If `size` is `0` or less, the function  prints only a new line
  - It uses the character `#` to print the square

**9. Fizz-Buzz**
- [9-fizz_buzz.c](./9-fizz_buzz.c): a program that prints the numbers from `1` to `100`, followed by a new line. But for multiples of three, it  prints `Fizz` instead of the number and for the multiples of five prints `Buzz`. For numbers which are multiples of both three and five it printz `FizzBuzz`.
  - Each number or word is separated by a space
  - it is not allowed to use the standard library

**10. Triangles**
- [10-print_triangle.c](./10-print_triangle.c): function that prints a triangle, followed by a new line.
  - It uses `_putchar` only function to print
  - The parameter `size` is the size of the triangle
  - If `size` is `0` or less, the function prints a new line only
  - the character `#` is used to print the triangle

**11. The problem of distinguishing prime numbers from composite numbers and of resolving the latter into their prime factors is known to be one of the most important and useful in arithmetic**
- [100-prime_factor.c](./100-prime_factor.c): program that finds and prints the largest prime factor of the number `612852475143`, followed by a new line.
  - It is not allowed to use the standard library
  - the program can be compiled with this command: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 100-prime_factor.c -o 100-prime_factor -lm`

**12. Numbers have life; they're not just symbols on paper**
- [101-print_number.c](./101-print_number.c): function that prints an integer.
  - It uses only `_putchar` function to print
  - it is not allowed to use `long`
  - it is not allowed to use arrays or pointers
  - it is not allowed to hard-code special values

## Header file:file_folder:
- [main.h](./main.h): header file that contains the prototypes of all functions and the prototype of the function [_putchar](./_putchar.c]

|File|Function prototype|
|----|------------------|
|`0-isupper.c`|`int _isupper(int c);`|
|`1-isdigit.c`|`int _isdigit(int c);`|
|`2-mul.c`|`int mul(int a, int b);`|
|`3-print_numbers.c`|`void print_numbers(void);`|
|`4-print_most_numbers.c`|`void print_most_numbers(void);`|
|`5-more_numbers.c`|`void more_numbers(void);`|
|`6-print_line.c`|`void print_line(int n);`|
|`7-print_diagonal.c`|`void print_diagonal(int n);`|
|`8-print_square.c`|`void print_square(int size);`|
|`9-fizz_buzz.c`|`int main (void)`|
|`10-print_triangle.c`|`void print_triangle(int size);`|
|`100-prime_factor.c`|`int main(void)`|
|`101-print_number.c`|`void print_number(int n)`|

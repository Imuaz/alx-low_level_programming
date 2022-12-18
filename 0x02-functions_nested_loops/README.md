# 0x02. C - Functions, nested loops

In this project, I learn;
- Nested loops and how to use them
- function and prototype and how to use functions
- the difference between a declaration and a definition of a function
- Scope of variables
- the `gcc` flags `-Wall -Werror -pedantic -Wextra -std=gnu89`
- the header files and how to to use them with `#include`

## Requirements

**General**

- Allowed editors: `vi`, `vim`, `emacs`.
- All  files will be compiled on Ubuntu 20.04 LTS using `gcc`, using the options `-Wall -Werror -Wextra -pedantic -std=gnu89`
- All files should end with a new line
- A `README.md` file, at the root of the folder of the project is mandatory
- A code should use the [Betty](https://github.com/holbertonschool/Betty) style. It will be checked using `betty-style.pl` and `betty-doc.pl`
- Use of global variables is not allowed
- No more than 5 functions per file
- Use of the standard library is not allowed. Any use of functions like `printf`, `puts`, etc… is forbidden
- Use of the [_putchar](https://github.com/holbertonschool/_putchar.c/blob/master/_putchar.c) function is allowed
- No need to push `_putchar.c`.
- The `main.c` files given as examples are not pushed here but are used for testing purpose.
- The prototypes of functions and the prototype of the function `_putchar` are included in the header file called [main.h](./main.h) pushed here.

## Tasks :page_with_curl:

**0. _putchar**

* [0-putchar.c](./0-putchar.c): C program that prints `_putchar`,followed by a new line
  - the program returns `0`

**1. I sometimes suffer from insomnia. And when I can't fall asleep, I play what I call the alphabet game**

* [1-alphabet.c](./1-alphabet.c): C function that prints the alphabet, in lowercase, followed by a new line.
  - the `_putchar` function has been used only twice as required

**2. 10 x alphabet**

* [2-print_alphabet_x10.c](./2-print_alphabet_x10.c):C function that prints 10 times the alphabet, in lowercase, followed by a new line.
  - the `_putchar` function has been used only     twice as required

**3. islower**

* [3-islower.c](./3-islower.c): C function that checks for lowercase character.
  - the function returns `1` if `c` is lowercase, and `0` if otherwise

**4. isalpha**

* [4-isalpha.c](./4-isalpha.c): C function that checks for alphabetic character.
  - the function returns `1` if `c` is a letter, lowercase or uppercase and `0` if otherwise

**5. Sign**

* [5-sign.c](./5-sign.c): C function that prints the sign of a number.
  - it returns `1` and prints `+` if `n` is greater than zero
	- it returns `0` and prints `0` if `n` is zero
	- it returns `-1` and prints `-` if `n` is less than zero

**6. There is no such thing as absolute value in this world. You can only estimate what a thing is worth to you**

* [6-abs.c](./6-abs.c): C function that computes the absolute value of an integer.

**7. There are only 3 colors, 10 digits, and 7 notes; it's what we do with them that's important**

* [7-print_last_digit.c](./7-print_last_digit.c): C function that prints the last digit of a number.
  - it returns the value of the last digit

**8. I'm federal agent Jack Bauer, and today is the longest day of my life**

* [8-24_hours.c](./8-24_hours.c): C function that prints every minute of the day of Jack Bauer, starting from 00:00 to 23:59.

**9. Learn your times table**

* [9-times_table.c](./9-times_table.c): C function that prints the 9 times table, starting with 0.

**10. a + b**

* [10-add.c](./10-add.c): C function that adds two integers and returns the result.

**11. 98 Battery Street, the OG**

* [11-print_to_98.c](./11-print_to_98.c): C function that prints all natural numbers from `n` to `98`, followed by a new line.
  - Printed numbers are separated by a comma, followed by a space
	- Numbers are printed in order
	- The first printed number is the number passed the function
	- The last printed number is `98`
	- the use of the standard library is allowed

**12. The World looks like a multiplication-table, or a mathematical equation, which, turn it how you will, balances itself**

* [100-times_table.c](./100-times_table.c): C function that prints the `n` times table, starting with `0`.
  - it does not print anything if `n` is greater than `15` or less than `0`.

**13. Nature made the natural numbers; All else is the work of women**

* [101-natural.c](./101-natural.c):C program that computes and prints the sum of all the multiples of `3` or `5` below `1024` (excluded), followed by a new line.
  - the use of standard library is allowed

**14. In computer class, the first assignment was to write a program to print the first 100 Fibonacci numbers. Instead, I wrote a program that would steal passwords of students. My teacher gave me an A**

* [102-fibonacci.c](./102-fibonacci.c): C program that prints the first 50 Fibonacci numbers, starting with `1` and `2`, followed by a new line.
  - The numbers are separated by comma, followed by a space `, `.
	- Use of the standard library is allowed

**15. Even Liber Abbaci**

* [103-fibonacci.c](./103-fibonacci.c): C program that finds and prints the sum of the even-valued terms by considering the terms in the Fibonacci sequence whose values do not exceed 4,000,000. followed by a new line.
  - Use of standard library is allowed
	
**16. In computer class, the first assignment was to write a program to print the first 100 Fibonacci numbers. Instead, I wrote a program that would steal passwords of students. My teacher gave me an A+**

* [104-fibonacci.c](./104-fibonacci.c): C program that finds and prints the first 98 Fibonacci numbers, starting with `1` and `2`, followed by a new line.
  - The numbers printed are separated by comma, followed by a space ,
	- use of the standard library is allowed
	- use of any other library (like  `GMP` etc…) is not allowed
	- use of `long long`, `malloc`, pointers, arrays/tables, or structures is not allowed
	- coding any Fibonacci number (except for `1` and `2`) is not allowed

## Healper file :raised_hands:

* [_putchar.c](./_putchar.c): C function that writes a character to `stdout`.

## Header file :file_folder:

* [main.h](./main.h): header file that contain the prototypes of the functions and the prototype of the function `_putchar` used.

|File|Prototype|
|----|---------|
|`0-putchar.c`|`int main(void);`|
|`1-alphabet.c`|`void print_alphabet(void);`|
|`2-print_alphabet_x10.c`|`void print_alphabet_x10(void);`|
|`3-islower.c`|`int _islower(int c);`|
|`4-isalpha.c`|`int _isalpha(int c);`|
|`5-sign.c`|`int print_sign(int n);`|
|`6-abs.c`|`int _abs(int);`|
|`7-print_last_digit.c`|`int print_last_digit(int);`|
|`8-24_hours.c`|`void jack_bauer(void);`|
|`9-times_table.c`|`void times_table(void);`|
|`10-add.c`|`int add(int, int);`|
|`11-print_to_98.c`|`void print_to_98(int n);`|
|`100-times_table.c`|`void print_times_table(int n);`|

# 0x05. C - Pointers, arrays and strings:inbox_tray:

***INTRODUCTION***

The project covered a range of C programming topics, including pointers and arrays, differences between them, and their practical applications. It also explained how to use strings and manipulate them, as well as the scope of variables, including their lifetime and accessibility in a program. In summary, the project provided a comprehensive overview of these programming concepts and their importance in software development.

## Resources:books:

**Data Structures**

Basics (Read deep into either for explanations of common data structures):
- [Tutorials Point](https://www.tutorialspoint.com/data_structures_algorithms/data_structures_basics.htm)
- [Geeks for Geeks](https://www.geeksforgeeks.org/data-structures/)

    How to Select the Appropriate Data Structure:
- [Career Drill](https://www.careerdrill.com/blog/coding-interview/choosing-the-right-data-structure-to-solve-problems/)
**Other resources**
- [C - Arrays](https://www.tutorialspoint.com/cprogramming/c_arrays.htm)
- [C - Pointers](https://www.tutorialspoint.com/cprogramming/c_pointers.htm)
- [C - Strings](https://www.tutorialspoint.com/cprogramming/c_strings.htm)
- [Memory Layout](https://aticleworld.com/memory-layout-of-c-program/)

## Requirements:pushpin:

**General**
- Allowed editors: `vi`, `vim`, `emacs`
- All files will be compiled on Ubuntu 20.04 LTS using `gcc`, using the options `-Wall -Werror -Wextra -pedantic -std=gnu89`
- All files end with a new line
- A mandatory [README.md](./README.md) file, at the root of the folder of the project has been provided
- The code uses the `Betty` style. It may be checked using [betty-style.pl](https://github.com/holbertonschool/Betty/blob/master/betty-style.pl) and [betty-doc.pl](https://github.com/holbertonschool/Betty/blob/master/betty-doc.pl)
- It does not use global variables
- It has no more than 5 functions per file
- It does not use the standard library. Use any functions like `printf`, `puts`, etc… was forbidden
- it uses  [_putchar](./_putchar.c)
- The prototypes of all functions and the prototype of the function `_putchar` has been included the header file called `main.h` in this directory.

## Header file:file_folder:
- [main.h](./main.h): header file that contains all the function prototypes and the prototype of the function `_putchar` used in the project.

|File|Function prototype|
|----|------------------|
|`0-reset_to_98.c`|`void reset_to_98(int *n);`|
|`1-swap.c`|`void swap_int(int *a, int *b);`|
|`2-strlen.c`|`int _strlen(char *s);`|
|`3-puts.c`|`void _puts(char *str);`|
|`4-print_rev.c`|`void print_rev(char *s);`|
|`5-rev_string.c`|`void rev_string(char *s);`|
|`6-puts2.c`|`void puts2(char *str);`|
|`7-puts_half.c`|`void puts_half(char *str);`|
|`8-print_array.c`|`void print_array(int *a, int n);`|
|`9-strcpy.c`|`char *_strcpy(char *dest, char *src);`|
|`100-atoi.c`|`int _atoi(char *s);`|
|`101-keygen.c`|`int main(void)`|

## Tests:100: :heavy_check_mark:
- [tests](./tests): folder that contains `main.c` files provided by ALX for testing purposes.

## Tasks:page_with_curl:

**0. 98 Battery st.**
- [0-reset_to_98.c](./0-reset_to_98.c): C function that takes a pointer to an `int` as parameter and updates the value it points to to `98`.

**1. Don't swap horses in crossing a stream**
- [1-swap.c](./1-swap.c): C function that swaps the values of two integers.

**2. This report, by its very length, defends itself against the risk of being read**
- [2-strlen.c](./2-strlen.c): C function that returns the length of a string.

**3. I do not fear computers. I fear the lack of them**
- [3-puts.c](./3-puts.c): C function that prints a string, followed by a new line, to `stdout`

**4. I can only go one way. I've not got a reverse gear**
- [4-print_rev.c](./4-print_rev.c): C function that prints a string, in reverse, followed by a new line.

**5. A good engineer thinks in reverse and asks himself about the stylistic consequences of the components and systems he proposes**
- [5-rev_string.c](./5-rev_string.c): C function that reverses a string.

**6. Half the lies they tell about me aren't true**
- [6-puts2.c](./6-puts2.c): C function that prints every other character of a string, starting with the first character, followed by a new line.

**7. Winning is only half of it. Having fun is the other half**
- [7-puts_half.c](./7-puts_half.c): C function that prints half of a string, followed by a new line.
  - The function prints the second half of the string
  - If the number of characters is odd, the function prints the last `n` characters of the string, where `n = (length_of_the_string - 1) / 2`

**8. Arrays are not pointers**
- [8-print_array.c](./8-print_array.c): C function that prints `n` elements of an array of integers, followed by a new line.
  - The parameter `n` is the number of elements of the array to be printed
  - Numbers are separated by comma, followed by a space
  - The numbers are displayed in the same order as they are stored in the array
  - It does not use the `printf` function.

**9. strcpy**
- [9-strcpy.c](./9-strcpy.c): C function that copies the string pointed to by `src`, including the terminating null byte (`\0`), to the buffer pointed to by `dest`.
  - It is similar to the standard library's `strcpy` function
  - Return value: the pointer to `dest`

**10. Great leaders are willing to sacrifice the numbers to save the people. Poor leaders sacrifice the people to save the numbers**
- [100-atoi.c](./100-atoi.c): C function that convert a string to an integer.
  - The number in the string can be preceded by an infinite number of characters
  - all the `-` and `+` signs before the number has been taken into account
  - If there are no numbers in the string, the function returns `0`
  - it is not allowed to use `long`
  - new variables of “type” array is not declared
  - it is not allowed to hard-code special values
  - the `-fsanitize=signed-integer-overflow` gcc flag may be used to compile the code.
  - The standard library provides a similar function: `atoi`

**11. Don't hate the hacker, hate the code**
- [101-keygen.c](./101-keygen.c): C program that generates random valid passwords for the program [101-crackme](https://github.com/holbertonschool/0x04.c).
  - use the standard library is allowed
  - It is not necessary to pass the `betty-style` tests (but there is need to pass the `betty-doc` tests)
  - man `srand`, `rand`, `time` helps
  - `gdb` and `objdump` can also help

## Helper file:raised_hands:
- [_putchar](./_putchar.c): C function that writes a character `c` to `stdout`, it used instead of standard library's `printf' function.

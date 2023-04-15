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

## Tasks:page_with_curl:

**0. 98 Battery st.**
- [0-reset_to_98.c](./0-reset_to_98.c): C function that takes a pointer to an `int` as parameter and updates the value it points to to `98`.

**1. Don't swap horses in crossing a stream**
- [1-swap.c](./1-swap.c): C function that swaps the values of two integers.

**2. This report, by its very length, defends itself against the risk of being read**
- [2-strlen.c](./2-strlen.c): C function that returns the length of a string.

**3. I do not fear computers. I fear the lack of them**
- [3-puts.c](./3-puts.c): C function that prints a string, followed by a new line, to `stdout`


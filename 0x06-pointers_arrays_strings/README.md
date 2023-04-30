# 0x06. C - More pointers, arrays and strings:inbox_tray:

**INTRODUCTION**

The project is the continuation of the [previous project](../0x05-pointers_arrays_strings), which expands on the concepts including the definition and usage of pointers and arrays, their differences, and practical applications. It also covers the usage of strings and how to manipulate them, as well as the scope of variables, including their lifetime and accessibility within a program.

## Requirements:pushpin:

**General**
- Allowed editors: `vi`, `vim`, `emacs`
- All files will be compiled on Ubuntu 20.04 LTS using `gcc`, using the options `-Wall -Werror -Wextra -pedantic -std=gnu89`
- All files should end with a new line
- A mandatory [README.md](./README.md) file, at the root of the folder of the project is provided
- The code should use the `Betty` style. It may be checked using `betty-style.pl` and `betty-doc.pl`
- It is not allowed to use global variables
- No more than 5 functions per file
- It is not allowed to use the standard library. Any use of functions like `printf`, `puts`, etc… is forbidden
- It is allowed to use `_putchar` function insteat
- The prototypes of all functions and the prototype of the function `_putchar` is included in a header file called `main.h`

## Header file:file_folder:
- [main.h](./main.h): header file that contains all the function prototypes and the prototype of the function `_putchar` used in the project

|File|Function prototype|
|----|------------------|
|`0-strcat.c`|`char *_strcat(char *dest, char *src);`|
|`1-strncat.c`|`char *_strncat(char *dest, char *src, int n);`|
|`2-strncpy.c`|`char *_strncpy(char *dest, char *src, int n);`|
|`3-strcmp.c`|`int _strcmp(char *s1, char *s2);`|
|`4-rev_array.c`|`void reverse_array(int *a, int n);`|
|`5-string_toupper.c`|`char *string_toupper(char *);`|
|`6-cap_string.c`|`char *cap_string(char *);`|
|`7-leet.c`|`char *leet(char *);`|
|`100-rot13.c`|`char *rot13(char *);`|
|`101-print_number.c`|`void print_number(int n);`|
|`102-magic.c`|`main`|
|`103-infinite_add.c`|`char *infinite_add(char *n1, char *n2, char *r, int size_r);`|
|`104-print_buffer.c`|`void print_buffer(char *b, int size);`|

## Tests:100::heavy_check_mark:

- [tests](./tests): folder that contains `main.c` files provided by ALX and some files for testing purposes.

## Tasks:page_with_cutl:


# C - Function pointers

This project generally teaches;
* What are function pointers and how to use them
* What does a function pointer exactly hold and
* Where does a function pointer point to in the virtual memory.

## Tasks

* **0. What's my name**
  * [0-print_name.c](0-print_name.c): C function that prints a name.
* **1. If you spend too much time thinking about a thing, you'll never get it done**
  * [1-array_iterator.c](1-array_iterator.c): C function that executes a function given as a parameter on each element of an array.
* **2. To hell with circumstances; I create opportunities**
  * [2-int_index.c](2-int_index.c): A function that searches for an integer.
    * Returns the index of the first element for which the `cmp` function does not return `0`
    * The function returns `-1` If no element matches or `size <= 0`.
* **3. A goal is not always meant to be reached, it often serves simply as something to aim at**
  * [3-main.c](3-main.c): C program that performs simple mathematical operations.
    * Usage: `calc num1 operator num2`.
    * It assumes `num1` and `num2` are integers,and are converted using the `atoi` function from the string input to `int`.
    * The program assumes that the result of all operations can be stored in an `int`
    * The program prints the result of the operation, followed by a new line.
    * `operator` is one of the following:`+`(addition),`-`(subtraction),`*`(multiplication),`/`(division),`%`(modulo).
    * If the number of arguments is wrong or the `operator` is none of the above,it prints `Error`, followed by a new line, and exit with the status `98`.
    * If the user tries to divide (`/ `or `%`) by `0`,it  prints `Error`, followed by a new line, and exit with the status `100`.
  * [3-op_functions.c](3-op_functions.c): A file that contain the following 5 functions:
    * `op_add`: returns the sum of `a` and `b`.
    * `op_sub`: returns the difference of `a` and `b`.
    * `op_mul`: returns the product of `a` and `b`.
    * `op_div`: returns the result of the division of `a` by `b`.
    * `op_mod`: returns the remainder of the division of `a` by `b`.
  * [3-get_op_func.c](3-get_op_func.c): A file that contain the function that selects the correct function from `3-op_functions.c` to perform the operation asked by the user.
    * it returns a pointer to the function that corresponds to the operator given as a parameter. e.g `get_op_func("+")`returns a pointer to the function `op_add`.
    * If `s` does not match any of the 5 expected operators (`+`, `-`, `*`, `/`, `%`), it returns `NULL`.
    * The use of `switch` statements and `for`, `do..while`loops, `goto`, and `else` was not allowed in the file.
    * Using the `if` statement or `while` loop more than one was also not allowed.

## Header Files

* [function_pointers.h](function_pointers.h): Header file that contains all the function prototypes for task 0-2 of the project.

|File|Prototype|
|----|---------|
|`0-print_name.c`|`void print_name(char *name, void (*f)(char *));`|
|`1-array_iterator.c`|`void array_iterator(int *array, size_t size, void (*action)(int));`|
|`2-int_index.c`|`int int_index(int *array, int size, int (*cmp)(int));`|

* [3-calc.h](3-calc.h): Header file that contains all the type definations and function prototypes for task 3 ([3-main.c](3-main.c)).

|Type/file|Defination/Prototype|
|---------|--------------------|
|`struct op`|* ` char *op` * `int (*f)(int a, int b)`|
|`typedef op_t`|`struct op`|
|`3-op_functions.c`|* `int op_add(int a, int b);` * `int op_sub(int a, int b);` * `int op_mul(int a, int b);` * `int op_div(int a, int b);` * `int op_mod(int a, int b);`|
|`3-get_op_func.c`|`int (*get_op_func(char *s))(int, int);`|

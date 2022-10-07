# C - Moere malloc

This project generally teaches:
1. How to use the `exit`function,
2. What are the standard library functions `calloc` and `realloc`
3. and how to use them

## Tasks

* **0. Trust no one**
  * [0-malloc_checked.c](0-malloc_checked.c): C function that llocates memory using `malloc`.
	  * It returns a pointer to the allocated memory, and
		* if `malloc` fails, the function causes normal process termination with a status value of `98`
* **1. string_nconcat**
  * [1-string_nconcat.c](1-string_nconcat.c): C function that concatenates two strings
	  * The returned pointer points to a newly allocated space in memory, which contains `s1`, followed by the first `n` bytes of `s2`, and null terminated
		* the function returns `NULL` if it fails.
		* the function uses  entire string s2 if `n` >= the length os `s2`.
		* if `NULL` is passed to the function,it treats it as an empty string.
* **2. _calloc**
  * [2-calloc.c](2-calloc.c): C function that allocates memory for an array, using `malloc`.
	  * the function allocates memory for an array of `nmemb` elements of `size` bytes each and returns a pointer to the allocated memory.
		* the memory is set to zero
		* it returns `NULL` If `nmemb` or `size` is `0`
		* it also returns `NULL` if `malloc` fails.
* **3. array_range**
  * [3-array_range.c](3-array_range.c): C function that creates an array of integers.
	  * The created array contain all the values from `min` (included) to `max` (included), ordered from `min` to `max`
		* it returns a pointer to the newly created array
		* it returns `NULL` If `min` > `max`
		* and `NULL` If `malloc` fails
* **4. _realloc**
  * [100-realloc.c](100-realloc.c): C function that reallocates a memory block using `malloc` and `free`.
	  * the parameter `ptr` is a pointer to the memory previously allocated with a call to `malloc`: `malloc(old_size)`
		* `old_size` is the size, in bytes, of the allocated space for `ptr`
		* and `new_size` is the new size, in bytes of the new memory block
		* The contents will be copied to the newly allocated space, in the range from the start of `ptr` up to the minimum of the old and new sizes
		* the “added” memory is not initialized If `new_size` > `old_size`.
		* it returns `ptr` if `new_size` == `old_size`
		* If `ptr` is `NULL`, then the call is equivalent to `malloc(new_size)`, for all values of `old_size` and `new_size`
		* If `new_size` is equal to zero, and `ptr` is not `NULL`, then the call is equivalent to `free(ptr)`. and the function returns `NULL`
		* the `ptr` is `free`ed when it makes sense.
* **5. We must accept finite disappointment, but never lose infinite hope**
  * [101-mul.c](101-mul.c): C program that multiplies two positive numbers.
	  * Usage: `mul` `num1` `num2`.
		* the function assumes `num1` and `num2` are passed in base 10.
		* Prints the result, followed by a new line
		* If the number of arguments is incorrect or `num1` and `num2` composed of non-digits,it prints `Error`, followed by a new line, and exit with a status of `98`

## Header file

* [main.h](main.h): Header file containing all the function prototypes used in the project.

| File | Prototype|
|------|----------|
|`0-malloc_checked.c`|`void *malloc_checked(unsigned int b);`|
|`1-string_nconcat.c`|`char *string_nconcat(char *s1, char *s2, unsigned int n);`|
|`2-calloc.c`|`void *_calloc(unsigned int nmemb, unsigned int size);`|
|`3-array_range.c`|`int *array_range(int min, int max);`|
|`100-realloc.c`|`void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);`|
|`_putchar.c`|`int _putchar(char c);`|

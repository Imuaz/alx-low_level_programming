# C - malloc, free

This project teaches: 
* the difference between automatic and dynamic memory allocation
* what is `malloc` and `free` and how to use them
* Why and when use `malloc`
* How to use `valgrind` to check for memory leak

## Tasks
the project contains the following taks:
* **0. Float like a butterfly, sting like a bee**
  * [0-create_array.c](0-create_array.c): C function that creates an array of chars, and initialized with a specific char
	* char array is initialized to a parameter `c`.
	* the fuction returns `NULL` if `size` = `0`. and returns a pointer to the array, or `NULL` if it fails.

* **1. The woman who has no imagination has no wings**
  * [1-strdup.c](1-strdup.c): C function that returns a pointer to a new string which is a duplicate of the string `str`. Memory for the new string is obtained with `malloc`, and can be freed with `free`.
	* Returns `NULL` if str = NULL
	* On success, the `_strdup` function returns a pointer to the duplicated string. It returns `NULL` if insufficient memory was available
	
* **2. He who is not courageous enough to take risks will accomplish nothing in life**
  * [2-str_concat.c](2-str_concat.c): C function that concatenates two strings
	* The returned pointer points to a newly allocated space in memory which contains the contents of `s1`, followed by the contents of `s2`, and null terminated
	* if `NULL` is passed,it  treat it as an empty string
	* The function returns `NULL` on failure

* **3. If you even dream of beating me you'd better wake up and apologize**
  * [3-alloc_grid.c](3-alloc_grid.c): C function that returns a pointer to a 2 dimensional array of integers.
	* Each element of the grid is initialized to `0`
	* The function returns `NULL` on failure
	* If `width` or `height` is `0` or negative,it returns `NULL`

* **4. It's not bragging if you can back it up**
  * [4-free_grid.c](4-free_grid.c): C function that frees a 2 dimensional grid previously created by the `alloc_grid` function.

* **5. It isn't the mountains ahead to climb that wear you out; it's the pebble in your shoe**
  * [100-argstostr.c](100-argstostr.c): C function that concatenates all the arguments of my program.
	* Returns `NULL` if `ac == 0` or `av == NULL`
	* Returns a pointer to a new string, or `NULL` if it fails
	* Each argument is followed by a `\n` in the new string.
	
* **6. I will show you how great I am**
  * [101-strtow.c](101-strtow.c): C function that splits a string into words.
	* The function returns a pointer to an array of strings (words)
	* Each element of this array contains a single word, null-terminated
	* The last element of the returned array is `NULL`
	* Words are separated by spaces
	* Returns `NULL` if `str == NULL` or `str == ""`
	* If the function fails, it returns `NULL`

## Header File
--
* [main.h](main.h): header file containing all the function prototypes used in the project

| File | Prototypes |
|------|------------|
|`0-create_array.c` |`char *create_array(unsigned int size, char c)`|
|`1-strdup.c` |`char *_strdup(char *str)`|
|`2-str_concat.c`|`char *str_concat(char *s1, char *s2)`|
|`3-alloc_grid.c`|`int **alloc_grid(int width, int height)`|
|`4-free_grid.c` |`void free_grid(int **grid, int height)`|
|`100-argstostr.c`|`char *argstostr(int ac, char **av)`|
|`101-strtow.c` |`char **strtow(char *str)`|

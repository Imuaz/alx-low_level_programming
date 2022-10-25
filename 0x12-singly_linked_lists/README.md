# C - Singly linked lists

This project generally teaches:
- When and why using linked lists vs arrays
- How to build and use linked lists

## Tasks

The project contain the following Tasks

* **0. Print list**
  * [0-print_list.c](0-print_list.c): C function that prints all the elements of a `list_t` list
	  - the function returns the number of nodes
		- If `str` is `NULL`,it prints `[0] (nil)`
		- the use of `printf` function is allowed
* **1. List length**
  * [1-list_len.c](1-list_len.c): C function that returns the number of elements in a linked `list_t` list
* **2. Add node**
  * [2-add_node.c](2-add_node.c): C function that adds a new node at the beginning of a `list_t` list.
	  - it returns the address of the new element, or `NULL` if it failed
		- `str` has been duplicated
		- the use of `strdup` is allowed
* **3. Add node at the end**
  * [3-add_node_end.c](3-add_node_end.c): C function that adds a new node at the end of a `list_t` list.
	  - it returns the address of the new element, or `NULL` if it failed
		- `str` has been duplicated
		- the use of `strdup` is allowed
* **4. Free list**
  * [4-free_list.c](4-free_list.c): C function that frees a `list_t` list.
* **5. The Hare and the Tortoise**
  * [100-first.c](100-first.c): C function that prints `You're beat! and yet, you must allow,\nI bore my house upon my back!\n` before the `main` function is executed.
	 - use of `printf`function is allowed
* **6. Real programmers can write assembly code in any language**
  * [101-hello_holberton.asm](101-hello_holberton.asm): A 64-bit program in assembly that prints `Hello, Holberton`, followed by a new line
	  - it uses only the `printf` function
		- the use of interrupts is not allowed
		- the program will be compiled using `nasm` and `gcc`
## Header File
* [lists.h](lists.h): the Header file containing all function prototypes and the type definations used in the project.

|File/Type|Prototype/Defination|
|---------|--------------------|
|`struct list_s`|`char *str` `unsigned int len` `struct list_s *next`|
|`typedef` `tlist_t`|`struct list_s`|
|`0-print_list.c`|`size_t print_list(const list_t *h);`|
|`1-list_len.c`|`size_t list_len(const list_t *h);`|
|`2-add_node.c`|`list_t *add_node(list_t **head, const char *str);`|
|`3-add_node_end.c`|`list_t *add_node_end(list_t **head, const char *str);`|
|`4-free_list.c`|`void free_list(list_t *head);`|

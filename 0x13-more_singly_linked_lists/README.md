# C - More singly linked lists

This project generally taugth us how to use linked lists, and how look for the right source of information for our project without too much dependent on helping materials being provided.

## Header file

* [lists.h](lists.h): header faile that contains the prototypes of all functions and type definations use in the project

|Type/File|Defination/prototype|
|---------|--------------------|
|`struct listint_s`| - `int n;` - `struct listint_s *next;`|
|`typedef listint_t`|`struct listint_s`|
|`0-print_listint.c`|`size_t print_listint(const listint_t *h);`|
|`1-listint_len.c`|`size_t listint_len(const listint_t *h);`|
|`2-add_nodeint.c`|`listint_t *add_nodeint(listint_t **head, const int n);`|
|`3-add_nodeint_end.c`|`listint_t *add_nodeint_end(listint_t **head, const int n);`|
|`4-free_listint.c`|`void free_listint(listint_t *head);`|
|`5-free_listint2.c`|`void free_listint2(listint_t **head);`|
|`6-pop_listint.c`|`int pop_listint(listint_t **head);`|
|`7-get_nodeint.c`|`listint_t *get_nodeint_at_index(listint_t *head, unsigned int index);`|
|`8-sum_listint.c`|`int sum_listint(listint_t *head);`|
|`9-insert_nodeint.c`|`listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n);`|
|`10-delete_nodeint.c`|`int delete_nodeint_at_index(listint_t **head, unsigned int index);`|
|`100-reverse_listint.c`|`listint_t *reverse_listint(listint_t **head);`|
|`102-free_listint_safe.c`|`size_t free_listint_safe(listint_t **h);`|
|`103-find_loop.c`|`listint_t *find_listint_loop(listint_t *head);`|

## Tasks

* **0. Print list**
  * [0-print_listint.c](0-print_listint.c): C function that prints all the elements of a `listint_t` list.
	  * the use of `printf` is allowed
		* it returns the number of nodes
* **1. List length**
  * [1-listint_len.c](1-listint_len.c): C function that returns the number of elements in a linked `listint_t` list.
* **2. Add node**
  * [2-add_nodeint.c](2-add_nodeint.c): C function that adds a new node at the beginning of a `listint_t` list.
	  * it returns the address of the new element, or `NULL` if it failed.
* **3. Add node at the end**
  * [3-add_nodeint_end.c](3-add_nodeint_end.c): C function that adds a new node at the end of a `listint_t` list.
	  * the it returns the address of the new element, or `NULL` if it failed
* **4. Free list**
  * [4-free_listint.c](4-free_listint.c): C function that frees a `listint_t` list.
* **5. Free**
  * [5-free_listint2.c](5-free_listint2.c): C function that frees a listint_t list
	  * The function sets the `head` to `NULL`
* **6. Pop**
  * [6-pop_listint.c](6-pop_listint.c): C function that deletes the head node of a `listint_t` linked list.
	  * it returns the head node’s data (n).
		* and returns `0` if the linked list is empty.
* **7. Get node at index**
  * [7-get_nodeint.c](7-get_nodeint.c): C function that returns the nth node of a `listint_t` linked list.
	  * the parameter `index` is the index of the node, starting at `0`
		* it returns `NULL` if the node does not exist.
* **8. Sum list**
  * [8-sum_listint.c](8-sum_listint.c): C function that returns the sum of all the data (n) of a `listint_t` linked list.
	  * it returns `0` if the list is empty.
* **9. Insert**
  * [9-insert_nodeint.c](9-insert_nodeint.c): C function that inserts a new node at a given position.
	  * parameter `idx` is the index of the list where the new node should be added.
		* Index starts at `0`
		* it returns the address of the new node, or `NULL` if it failed.
		* if it is not possible to add the new node at index `idx`, it does not add the new node and returns `NULL`
* **10. Delete at index**
  * [10-delete_nodeint.c](10-delete_nodeint.c): C function that deletes the node at index `index` of a `listint_t` linked list.
	  * the parameter `index` is the index of the node that should be deleted starting at `0`
		* it returns `1` if it succeeded, `-1` if it failed.
* **11. Reverse list**
  * [100-reverse_listint.c](100-reverse_listint.c): C function that reverses a `listint_t` linked list.
	  * it returns a pointer to the first node of the reversed list.
		* the function require maximum use of two variables.
		* the use of more than `1` loop, `malloc`, `free` or arrays is not allowed in the function.
* **12. Print (safe version)**
  * [101-print_listint_safe.c](101-print_listint_safe.c): C function that prints a `listint_t` linked list.
	  * it returns the number of nodes in the list
		* it can print lists with a loop and go through the list only once
		* it exits the program with status `98` If the function fails.
* **13. Free (safe version)**
  * [102-free_listint_safe.c](102-free_listint_safe.c): C function that frees a `listint_t` list.
	  * This function can free lists with a loop and go though the list only once
		* it returns the size of the list that was free’d
		* it sets the head to `NULL`
* **14. Find the loop**
  * [103-find_loop.c](103-find_loop.c): C function that finds the loop in a linked list.
	  * the function require maximum use of two variables
		* the use of `malloc`, `free` or arrays was not allowed
		* it returns the address of the node where the loop starts, or `NULL` if there is no loop.

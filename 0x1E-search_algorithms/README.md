# 0x1E. C - Search Algorithms:mag:

**INTRODUCTION**

The project explored various aspects of search algorithms, starting with an explanation of what search algorithms are and their significance in programming. It then delved into the details of linear search and binary search algorithms, highlighting their characteristics and use cases. Additionally, the project discussed the importance of choosing the most suitable search algorithm based on specific needs and considerations. Overall, the project provided a comprehensive understanding of search algorithms and their practical applications in different scenarios.

## Resources:books:
_read or watch_
- [Search algorithm](https://en.m.wikipedia.org/wiki/Search_algorithm)
- [Space complexity (1)](https://www.geeksforgeeks.org/g-fact-86/)

## Requirements:pushpin:

**General**
- Allowed editors: `vi`, `vim`, `emacs`
- All files will be compiled on Ubuntu 20.04 LTS using `gcc`, using the options `-Wall -Werror -Wextra -pedantic -std=gnu89`
- All files should end with a new line
- A mandatory [README.md](./README.md) file, at the root of the folder of the project.
- the code should use the `Betty style`. It will be checked using [betty-style.pl](https://github.com/holbertonschool/Betty/blob/master/betty-style.pl) and [betty-doc.pl](https://github.com/holbertonschool/Betty/blob/master/betty-doc.pl)
- it is not allowed to use global variables
- No more than 5 functions per file
- only the `printf` function of the standard library is allowed. Any call to another function like `strdup`, `malloc`, `…` is forbidden.
- The prototypes of all functions should be included in a header file called `search_algos.h` and push to the repo.
- All header files should be include guarded

**NOTE**:!:

All files containing big O notations should use this format:
- `O(1)`
- `O(n)`
- `O(n!)`
- n*m -> `O(nm)`
- n square -> `O(n^2)`
- sqrt n -> `O(sqrt(n))`
- log(n) -> `O(log(n))`
- n * log(n) -> `O(nlog(n))`
- …

## Header file:open_file_folder:
- [search_algos.h](./search_algos.h): header file containing prototypes of all functions used kn the project.

|File|Prototype|
|----|---------|
|`0-linear.c`|`int linear_search(int *array, size_t size, int value);`|
|`1-binary.c`|`int binary_search(int *array, size_t size, int value);`|
|`100-jump.c`|`int jump_search(int *array, size_t size, int value);`|
|`102-interpolation.c`|`int interpolation_search(int *array, size_t size, int value);`|
|`103-exponential.c`|`nt exponential_search(int *array, size_t size, int value);`|
|`104-advanced_binary.c`|`int advanced_binary(int *array, size_t size, int value);`|
|`105-jump_list.c`|`listint_t *jump_list(listint_t *list, size_t size, int value);`|
|`106-linear_skip.c`|`skiplist_t *linear_skip(skiplist_t *list, int value);`|

**Data Structures**:
- for task ***12. Jump search in a singly linked list***;
```
typedef struct listint_s
{
    int n;
    size_t index;
    struct listint_s *next;
} listint_t;
```
- for task ***13. Linear search in a skip list***;
```
typedef struct skiplist_s
{
    int n;
    size_t index;
    struct skiplist_s *next;
    struct skiplist_s *express;
} skiplist_t;
```
## Tests:100::heavy_check_mark:
- [tests](./tests): folder containing the `main.c` files provided by ALX for testing purposes.

## Tasks:page_with_curl:

**0. Linear search**
- [0-linear.c](./0-linear.c): A function that searches for a value in an array of integers using the [Linear search algorithm](https://en.m.wikipedia.org/wiki/Linear_search)
  - The parameter `array` is a pointer to the first element of the array to search in
  - `size` is the number of elements in array
  - And `value` is the value to search for
  - the function return the first index where `value` is located
  - If `value` is not present in `array` or if `array` is `NULL`, the function returns `-1`
  - Every time a value in the array is compared to the value being searched, it prints the value.

**1. Binary search**
- [1-binary.c](./1-binary.c): A function that searches for a value in a sorted array of integers using the [Binary search algorithm](https://en.m.wikipedia.org/wiki/Binary_search_algorithm)
  - The parameter `array` is a pointer to the first element of the array to search in
  - `size` is the number of elements in `array`
  - And `value` is the value to search for
  - the function returns the index where `value` is located
  - it can be assumed that `array` will be sorted in ascending order
  - it can be assumed that `value` won’t appear more than once in `array`
  - If `value` is not present in `array` or if `array` is `NULL`, the function returns `-1`
  - It prints the array being searched every time it changes. (e.g. at the beginning and when subarray is search)

**2. Big O #0**
- [2-O](./2-O): file contains the `time complexity` (worst case) of a linear search in an array of size `n`

**3. Big O #1**
- [3-O](./3-O): file contains the `space complexity` (worst case) of an iterative linear search algorithm in an array of size `n`

**4. Big O #2**
- [4-O](./4-O): file contains the `time complexity` (worst case) of a binary search in an array of size `n`

**5. Big O #3**
- [5-O](./5-O): file contains the `space complexity` (worst case) of a binary search in an array of size `n`

**6. Big O #4**
- [6-O](./6-O): file contains the space complexity of the function/algorithm below:
```
int **allocate_map(int n, int m)
{
     int **map;

     map = malloc(sizeof(int *) * n);
     for (size_t i = 0; i < n; i++)
     {
          map[i] = malloc(sizeof(int) * m);
     }
     return (map);
}
```

**7. Jump search**
- [100-jump.c](./100-jump.c): A function that searches for a value in a sorted array of integers using the [Jump search algorithm](https://en.m.wikipedia.org/wiki/Jump_search)
  - The parameter `array` is a pointer to the first element of the array to search in
  - `size` is the number of elements in `array`
  - And `value` is the value to search for
  - the function returns the first index where `value` is located
  - it can be assumed that `array` will be sorted in ascending order
  - If `value` is not present in `array` or if `array` is `NULL`, the function returns `-1`
  - it uses the square root of the size of the array as the jump step.
  - the `sqrt()` function included in `<math.h>` may be used (but should be compiled with -lm)
  - Every time a value in the array is compared to the value being searched  for, it prints the value.

**8. Big O #5**
- [101-O](./101-O): file contains the `time complexity` (average case) of a jump search in an array of size `n`, using `step = sqrt(n)`

**9. Interpolation search**
- [102-interpolation.c](./102-interpolation.c): A function that searches for a value in a sorted array of integers using the [Interpolation search algorithm](https://en.m.wikipedia.org/wiki/Interpolation_search)
  - The parameter `array` is a pointer to the first element of the array to search in
  - `size` is the number of elements in `array`
  - And `value` is the value to search for
  - the function returns the first index where `value` is located
  - it is assume that `array` will be sorted in ascending order
  - If `value` is not present in `array` or if `array` is `NULL`, the function returns `-1`
  - To determine the probe position: `size_t pos = low + (((double)(high - low) / (array[high] - array[low])) * (value - array[low]))` can be used.
  - Every time a value in the array is compared to the value being searched, it prints the value

**10. Exponential search**
- [103-exponential.c](./103-exponential.c): A function that searches for a value in a sorted array of integers using the [Exponential search algorithm](https://en.m.wikipedia.org/wiki/Exponential_search)
  - The parameter `array` is a pointer to the first element of the array to search in
  - `size` is the number of elements in `array`
  - And `value` is the value to search for
  - the function returns the first index where `value` is located
  - it is assume that `array` will be sorted in ascending order
  - If `value` is not present in `array` or if `array` is `NULL`, the function returns `-1`
  - it uses powers of 2 as exponential ranges to search in the array
  - Every time a value in the array is compared to the value being searched for, it prints the value
  - Once the good range has been found, a binary search is use:
    - Every time the array splits, it prints the new array (or subarray) being searched in.

**11. Advanced binary search**
- It can be noticed that the basic binary search does not necessarily return the index of the first value in the array (if this value appears more than once in the array). In this task, that problem could be solved.
- [104-advanced_binary.c](./104-advanced_binary.c): A function that searches for a value in a sorted array of integers.
  - The parameter `array` is a pointer to the first element of the array to search in
  - `size` is the number of elements in `array`
  - And `value` is the value to search for
  - the function returns the index where `value` is located
  - it is assume that `array` will be sorted in ascending order
  - If `value` is not present in `array` or if `array` is `NULL`, the function returns `-1`
  - Every time the array splits, it prints the new array (or subarray) being searched in
  - it uses recursion. only one loop (`while`, `for`, `do while`, etc.) may be used in order to print the array

**12. Jump search in a singly linked list**
- [105-jump_list.c](./105-jump_list.c): A function that searches for a value in a sorted list of integers using the Jump search algorithm.
  - the parameter `list` is a pointer to the head of the list to search in
  - `size` is the number of nodes in `list`
  - And `value` is the value to search for
  - the function returns a pointer to the first node where value is located
  - it is assume that list will be sorted in ascending order
  - If `value` is not present in `head` or if `head` is `NULL`, the function returns `NULL`
  - it uses the square root of the size of the list as the jump step.
  - the `sqrt()` function included in `<math.h>` could be used(but it shoulf be compiled with -lm)
  - Every time a value in the list is compared to the value being searched, it prints the value
- **NOTE**: [these functions](https://github.com/holbertonschool/0x1D.c) have been used in the example.

**13. Linear search in a skip list**
- It can be observed that looking for a specific value in a singly linked list always leads to browse every element of the list. A common way to optimize the time complexity of a search in a singly linked list is to modify the list itself by adding an “express lane” to browse it. A linked list with an express lane is called a [skip list](https://en.m.wikipedia.org/wiki/Skip_list). This change does not come without consequences. Indeed, the space complexity of a search in this kind of list will grow as `sizeof(skiplist_t) > sizeof(listint_t)`.
- [106-linear_skip.c](./106-linear_skip.c): A function that searches for a value in a sorted skip list of integers
  - The parameter `list` is a pointer to the head of the skip list to search in
  - A node of the express lane is placed every index which is a multiple of the square root of the size of the list.
  - And `value` is the value to search for
  - it is assume that `list` will be sorted in ascending order
  - the function returns a pointer on the first node where `value` is located
  - If `value` is not present in `list` or if `head` is `NULL`, the function returns `NULL`
  - Every time a value in the list is compared to the value being searched, it prints the value
- **NOTE**:[these functions](https://github.com/holbertonschool/0x1D.c) have been used in the example.

**14. Big O #6**
- [107-O](./107-O): file contains the `time complexity` (average case) of a jump search in a singly linked list of size `n`, using `step = sqrt(n)`

**15. Big O #7**
- [108-O](./108-O): file contains the `vime complexity` average case) of a jump search in a skip list of size `n`, with an express lane using `step = sqrt(n)`

#ifndef FUNCTION_POINTERS_H
#define FUNCTION_POINTERS_H

#include <stdio.h>
#include <stdlib.h>

/*
 * file: function_pointers.h
 * Auth: Idris Muazu Yakub
 * Desc: Header file containing all the function prototypes
 *       used in the 0x0F. C-funtion pointers project
 */

int _putchar(char c);
void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));
int int_index(int *array, int size, int (*cmp)(int));

#endif /*FUNCTION_POINTERS_H*/

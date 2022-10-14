#ifndef VARFUNC
#define VARFUNC

/*
 * file: variadic_functions.h
 * Authr: Idris Muazu Yakub
 * Desc: header file that contains prototypes of all functions
 * used and the prototype of the function _putchar
 */

/**
 * struc typ - Struc operators
 * @c: character pointer
 * @tp: function pointer
 */
typedef struc typ
{
	char *c;
	void (*tp)(va_list var);
} typ_t;

#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif /*VARIADIC_FUNCTIONS_H*/

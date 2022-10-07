#ifndef MAIN_H
#define MAIN_H

/**
 * File: main.h
 * Athr: Idris Muazu Yakub
 * Desc: header containig all the prototypes
 * used in 0x0C-more_malloc_free project
 */

#include <stdlib.h>
#include <stdio.h>

void *malloc_checked(unsigned int b);
char *string_nconcat(char *s1, char *s2, unsigned int n);
void *_calloc(unsigned int nmemb, unsigned int size);
int *array_range(int min, int max);
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);
int _atoi(const char *s);
void print_int(unsigned long int n);
void _puts(char *str);

#endif /*MAIN_H*/
#ifndef MAIN_H
#define MAIN_H

/**
 * File: main.h
 * Authr: Idris Muazu Yakub
 * Desc: Header file that contains the prototypes of all
 * the functions used in the project
 */
#include <stdio.h>
#include <stdlib.h>

unsigned int binary_to_uint(const char *b);
void print_binary(unsigned long int n);
int get_bit(unsigned long int n, unsigned int index);
int set_bit(unsigned long int *n, unsigned int index);
unsigned int flip_bits(unsigned long int n, unsigned long int m);

#endif /*MAIN_H*/

#ifndef MAIN_H
#define MAIN_H

/**
 * File: main.h
 * Auth: Idris Muazu Yakub
 * Desc: header file containing all the function prototypes used in
 * 0x06-pointers_arrays and strings
 */
int _putchar(char c);
char *_strcat(char *dest, char *src);
char *_strncat(char *dest, char *src, int n);
char *_strncpy(char *dest, char *src, int n);
int _strcmp(char *s1, char *s2);
void reverse_array(int *a, int n);
char *string_toupper(char *);
char *cap_string(char *);
void print_number(int n);
char *rot13(char *s);
char *infinite_add(char *n1, char *n2, char *r, int size_r);

#endif

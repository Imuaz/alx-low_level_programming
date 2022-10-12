#ifndef CALC_H
#define CALC_H

/*
 * file: 3-calc.h
 * Authr: Idris Muazu Yakub
 * Desc: hearde file that contains all the function prototypes the data
 * structures used by the 3-calc.c program.
 */

/**
 * struct op - Struct op.
 *
 * @op: The operator
 * @f: The function associated
 */
typedef struct op
{
	char *op;
	int (*f)(int a, int b);
} op_t;

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);
int (*get_op_func(char *s))(int, int);

#endif /*CALC_H*/

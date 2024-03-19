#ifndef CALC_H
#define CALC_H

#include <stdio.h>
#include <stdlib.h>

/**
* struct op - Struct op
*
* @op: The operator
* @f: The function associated
*/
typedef struct op
{
	char *op; /* pointeur vers l'opérateur ('+', '-', ...) */

	int (*f)(int a, int b); /* pointeur vers la fonction */

} op_t; /* alias pour la strucuture */

int op_add(int a, int b);

int op_sub(int a, int b);

int op_mul(int a, int b);

int op_div(int a, int b);

int op_mod(int a, int b);

int (*get_op_func(char *s))(int, int);

#endif /* CALC_H */

#include "3-calc.h"
#include <stddef.h>
#include <stdlib.h>

/**
* get_op_func - selects the correct function to perform the operation asked
*
* @s: operator passed as argument to the program
*
* Return: pointer to the function that corresponds to the operator given as a
* parameter
*/
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL} /* pour indiquer la fin d'un tableau de structure */
	};
	int i = 0;

	while (ops[i].op != NULL) /* Parcourt les élements de la struct ops */
	{
/* Si les opérateurs de la struct ops correspondent avec */
/* "s" (l'opérateur passé en argument dans le terminal). */
/* [0] signifie qu'on check le premier argument. */
		if (ops[i].op[0] == s[0])
		{
			return (ops[i].f);
		/* Si les opérateurs correspondent, la fonction associée à cet */
		/* opérateur est retournée à partir de ops[i].f */
		/* -- Exemple: si ops[2].op[0] == s[0] correspond à "*" */
		/* -- il renvoie vers la fonction (f) op_mul */
		}
		i++;
	}

	return (NULL);

}

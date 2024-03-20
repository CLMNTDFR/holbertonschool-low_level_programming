#include "variadic_functions.h"
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>

/**
* sum_them_all - function that returns the sum of all its parameters
* @n: const variable of integrer - number of numbers
*
* Return: the sum (or 0 if n == 0)
*/
int sum_them_all(const unsigned int n, ...)
{
	va_list liste; /* Variable stockant la liste d'arg */

	int sum = 0;

	unsigned int i; /* index unsigned car comparaison avec n unsigned */

	if (n == 0)
	return (0); /* Gestion des cas d'échec */

	va_start(liste, n);
    /* va_start prend le nom de la va_liste et la dernière variable connue */
	for (i = 0; i < n; i++)
	{
		sum = sum + va_arg(liste, unsigned int);

	}
	va_end(liste); /* Libération mémoire */

	return (sum);
}

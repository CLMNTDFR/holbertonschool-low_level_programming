#include "variadic_functions.h"
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>

/**
* print_strings - function that prints strings, followed by a new line.
* @separator: the string to be printed between strings
* @n: number of strings passed to the function
*
* Return: void
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list liste;

	unsigned int i;

	va_start(liste, n);
	/* va_start prend le nom de la va_liste et la dernière variable connue */

	for (i = 0; i < n; i++)
	{
	/* Création de str pour stocker l'argument pointé */
	/* car obligatoire pour vérifier si l'argument pointé est NULL ou non */
		char *str = va_arg(liste, char *);

		if (str ==  NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", str);
		}

		if (separator != NULL && i < n - 1)
		{
			printf("%s", separator);
		}
	}
	printf("\n");

	va_end(liste); /* Libération mémoire */
}

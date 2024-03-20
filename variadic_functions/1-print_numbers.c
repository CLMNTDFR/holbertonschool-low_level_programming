#include "variadic_functions.h"
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>

/**
* print_numbers -  function that prints numbers, followed by a new line
* @separator: the string to be printed between numbers
* @n: the number of integers passed to the function
*
* Return: void
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list liste;

	unsigned int i;

	va_start(liste, n);
	/* va_start prend le nom de la va_liste et la dernière variable connue */

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(liste, int));

		if (separator != NULL && i < n - 1)
		{
			printf("%s", separator);
		}
	}
	printf("\n");

	va_end(liste); /* Libération mémoire */
}

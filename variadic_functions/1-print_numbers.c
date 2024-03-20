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

	if (separator != NULL && n > 0)
	{
		va_start(liste, n);
	/* va_start prend le nom de la va_liste et la dernière variable connue */
	for (i = 0; i < n - 1; i++)
	{
		printf("%d%s", va_arg(liste, unsigned int), separator);

	}
	printf("%d\n", va_arg(liste, unsigned int));
	va_end(liste); /* Libération mémoire */
	}
}

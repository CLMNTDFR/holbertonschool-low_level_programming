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
	va_list liste;

	int sum = 0;

	unsigned int i;

	if (n == 0)
	return (0);

	va_start(liste, n);
	for (i = 0; i < n; i++)
	{
		sum = sum + va_arg(liste, unsigned int);

	}
	va_end(liste);

	return (sum);
}

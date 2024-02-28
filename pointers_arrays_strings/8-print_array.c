#include <stdio.h>
#include "main.h"

/**
 * print_array - function that print elements of an array
 * @a: the array
 * @n: variable with the number of elements in the array
 *
 * Return: void
 */
void print_array(int *a, int n)
{
	int index = 0;

	for (index = 0; index <  n; index++)
	{
		printf("%d", a[index]);

		if (index < n - 1)
		{
			printf(", ");
		}
		else
		{
			printf("\n");
		}
	}
}


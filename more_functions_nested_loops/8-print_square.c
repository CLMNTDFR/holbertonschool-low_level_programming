#include "main.h"

/**
 * print_square - function that prints a square
 * @size: the number that be checked
 *
 * Return: void
 */
void print_square(int size)
{
	int h;
	int l;

	for (h = 0; h < size; h++)
	{
		for (l = 0; l < size; l++)
		{
			_putchar(35);
		}
		_putchar(10);
	}

	if (size <= 0)
	{
		_putchar(10);
	}
}


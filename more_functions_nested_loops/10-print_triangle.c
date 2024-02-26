#include "main.h"

/**
 * print_triangle - function that prints a triangle
 *
 * Return: void
 */
void print_triangle(int size)
{
	int x;
	int y;
	int z;

	for (x = size; x > 0; x--)
	{
		
		for (z = 1; z < x ; z++)
		{
			_putchar(32);
			for (y = 0; y <= (size - x); x++)
			{
				_putchar(35);
			}
		_putchar(10);
		}
	}
}


#include "main.h"

/**
 * print_alphabet_x10 - Print alphabet x10
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	char x;
	int y;

	for (y = 1; y <= 10; y++)
	{
		for (x = 'a'; y <= 'z'; x++)
		{
			_putchar(x);
		}

		_putchar(x);
	}
}


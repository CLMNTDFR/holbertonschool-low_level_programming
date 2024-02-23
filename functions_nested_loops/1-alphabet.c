#include "main.h"

/**
 * main - Print alphabet in lower case followed by a new line
 *
 * Return: void
 */
void print_alphabet(void)
{
	char x;

	for (x = 'a'; x <= 'z'; x++)
	{
		_putchar(x);
	}

	_putchar(10);
}


#include "main.h"

/**
 * print_alphabet: Print alphabet in lower case followed by a new line
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

	_putchar('\n');
}


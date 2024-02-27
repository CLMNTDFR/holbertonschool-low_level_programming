#include "main.h"

/**
 * print_rev -  function that prints a string, in reverse,follow by new line
 * @s: a string
 *
 * Return: void
 */
void print_rev(char *s)
{
	int length = 0;
	int index;

	while (s[length] != '\0')
	{
		length++;
	}

	for (index = (length - 1); index >= 0; index--)
	{
		_putchar(s[index]);
	}

	_putchar('\n');
}


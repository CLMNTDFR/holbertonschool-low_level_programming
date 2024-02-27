#include "main.h"

/**
 * _puts -  function that prints a string, followed by a new line, to stdout
 * @str: a string
 *
 * Return: void
 */
void _puts(char *str)
{
	int jump;

	for (jump = 0; str[jump] != '\0'; jump++)
	{
		_putchar(str[jump]);
	}

	_putchar('\n');
}


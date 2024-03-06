#include "main.h"

/**
 * _puts_recursion -  function that prints a string, followed by a new line
 * @s: the string that be checked
 *
 * Return: void
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}


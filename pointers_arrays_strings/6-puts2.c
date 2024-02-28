#include "main.h"

/**
 * puts2 - function that prints 1 character on 2
 * @str: the string
 *
 * Return: void
 */
void puts2(char *str)
{
	int jump = 0;

	while (str[jump] != '\0')
	{
		if (jump % 2 == 0)
		{
			_putchar(str[jump]);
		}
		jump++;
	}
	_putchar('\n');
}


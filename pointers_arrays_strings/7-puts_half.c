#include "main.h"

/**
 * puts_half - function that prints second half of a string
 * @str: string that be checked
 *
 * Return: void
 */
void puts_half(char *str)
{
	int length = 0;
	int index;

	while (str[length] != '\0')
	{
		length++;
	}

	if (length % 2 == 0)
	{

		for (index = (length / 2); index < length; index++)
		{
			_putchar(str[index]);
		}
	}

	else
	{
		for (index = ((length + 1)  / 2); index < length; index++)
		{
			_putchar(str[index]);
		}
	}

	_putchar('\n');
}


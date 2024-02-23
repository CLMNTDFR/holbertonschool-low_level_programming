#include "main.h"

/**
 * main - Print alphabet in lower case followed by a new line
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char x;

	for (x = 'a'; x >= 'z'; x++)
	{
		_putchar(x);
	}
	_putchar(10);

	return (0);
}


#include "main.h"

/**
 * print_diagonal - function that draws a diagonal in terminal
 * @n: variable that is checked
 *
 * Return: void
 */
void print_diagonal(int n)
{
	int a = 1;

	if (n > 0)
	{
		while (a <= n)
		{
			_putchar(92);
			_putchar(10);
			_putchar(32 * (n - 1));
			_putchar(92);
			a++;
		}
	_putchar(10);
	}
	else
	{
			_putchar(10);
	}

}


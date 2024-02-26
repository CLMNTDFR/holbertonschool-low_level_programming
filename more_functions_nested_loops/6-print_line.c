#include "main.h"

/**
 * print_line - function that draws a straight line in terminal
 * @n: variable that is checked
 *
 * Return: void
 */
void print_line(int n)
{
	int a = 0;

	if (n > 0)
	{
		while (a <= n)
		{
			_putchar(95);
			a++;
		}
	_putchar(10);
	}
	else
	{
			_putchar(10);
	}

}


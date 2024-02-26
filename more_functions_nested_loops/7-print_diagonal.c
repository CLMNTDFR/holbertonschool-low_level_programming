#include "main.h"

/**
 * print_diagonal - function that draws a diagonal in terminal
 * @n: variable that is checked
 *
 * Return: void
 */
void print_diagonal(int n)
{
	int l = 0;
	int e = 0;

	if (n > 0)
	{
		while (l < n)
		{
			while (e < l)
			{
				_putchar(32);
				e++;
			}
			l++;
			e = 0;
			_putchar(92);
			_putchar(10);
		}
	}
	else
	{
		_putchar(10);
	}
}


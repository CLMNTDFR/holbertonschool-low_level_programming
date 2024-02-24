#include "main.h"

/**
 * times_table - function that print 9 times table starting with 0
 *
 * Return: void
 */
void times_table(void)
{
	int a, b;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			int add = a * b;

			if (b != 0)
			{
				_putchar(44);
				_putchar(32);
			}
			if (add >= 10)
			{
				_putchar((add / 10) + '0');
				_putchar((add % 10) + '0');
			}
			else
			{
				_putchar(32);
				_putchar(add + '0');
			}
		}
		_putchar('\n');
	}
}

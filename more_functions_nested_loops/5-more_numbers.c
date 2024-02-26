#include "main.h"

/**
 * more_numbers - function that print 0 to 14, ten times
 *
 * Return: void
 */
void more_numbers(void)
{
	int x;
	int y;

	for (y = 1; y <= 10; y++)
	{
		for (x = 0; x <= 14; x++)
		{
			if (x > 9)
			{
				_putchar('1');
			}
			_putchar ('0' + (x % 10));
		}
		_putchar(10);
	}
}


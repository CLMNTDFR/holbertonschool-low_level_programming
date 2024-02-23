#include "main.h"

/**
 * jack_bauer - function that print every minute of a day
 *
 * Return: void
 */
void jack_bauer(void)
{
	int h, m;

	for (h = 0; h < 24; h++)
	{
		for (m = 0; m < 60; m++)
		{
			_printf("(%d, %d)", h, m);
		}
	}
}


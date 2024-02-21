#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int prem, deux;

	for (prem = 0; prem < 10; prem++)
	{
		for (deux = 0; deux < 10; deux++)
		{
			if (prem != deux && prem < deux)
			{
				putchar('0' + prem);
				putchar('0' + deux);

				if (!(prem == 8 && deux == 9))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}

	putchar('\n');

	return (0);
}

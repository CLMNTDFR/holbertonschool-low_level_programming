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
	int prem, deux, trois;

	for (prem = 0; prem < 10; prem++)
	{
		for (deux = 0; deux < 10; deux++)
		{
			for (trois = 0; trois < 10; trois++)
			{
				if (prem < deux && deux < trois)
				{
					putchar('0' + prem);
					putchar('0' + deux);
					putchar('0' + trois);

					if (!(prem == 7 && deux == 8 && trois == 9))
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}

	putchar('\n');

	return (0);
}

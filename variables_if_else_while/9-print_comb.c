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
	int n;

	n = '0';
	if (n != '9')
	{
		putchar(n);
		n++;
		putchar(',');
		putchar(' ');
	}
	putchar('\n');

	return (0);
}

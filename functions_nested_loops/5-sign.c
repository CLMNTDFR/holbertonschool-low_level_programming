#include "main.h"

/**
 * print_sign - function that print the sign of the number
 * @n: the character to be checked
 *
 * Return: 1 if n is positive, 0 if is zero, -1 if is negative
 */
int print_sign(int n)
{
	if (n > 0)
	{
		return (1);
		_putchar('+');
	}
	else if (n < 0)
	{
		return (-1);
		_putchar('-');
	}
	else
	{
		return (0);
		_putchar ('0');
	}
}


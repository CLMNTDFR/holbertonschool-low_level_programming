#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: the number to print
 */

void print_binary(unsigned long int n)
{
	/** Check if the number is zero or if there are more bits to print */
	if (n < 2)
	{
		_putchar(n + '0');
	}
	else
	{
		/**
		 * Recursively print the binary representation
		 * of the number by shifting it right by one bit
		 */
		print_binary(n >> 1);

		/** Print the current bit (0 or 1) */
		_putchar((n & 1) + '0');
	}
}

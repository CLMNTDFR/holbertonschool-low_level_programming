#include "main.h"

/**
 * get_bit - Gets the value of a bit at a given index
 *
 * @n: The number containing the bit
 * @index: The index of the bit to retrieve
 *
 * Return: The value of the bit at the given index, otherwise, -1 if
 * an error occurred
 */
int get_bit(unsigned long int n, unsigned int index)
{

	/** Check if the index is out of bounds */
	if (index > (sizeof(unsigned long int) * 8 - 1))
	{
		return (-1);
	}

	/** Shift the number to the right by the specified index */
	n >>= index;

	/** Mask off all but the least significant bit */
	n &= 1;

	/** Return the value of the bit */
	return (n);
}

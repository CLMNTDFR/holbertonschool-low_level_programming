#include "main.h"

/**
 * clear_bit - sets the value of a bit to '0' at a given index
 * @n: pointer to an unsigned long int
 * @index: the index of the bit to be cleared
 * Return: (int) '1' on success, or '-1' if an error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{

/* Check if the index is within the valid range (0 to 63) */
if (index > 63)
{
/* Invalid index, return an error code */
return (-1);
}

/* Clear the bit at the specified index */
*n &= ~(1 << index);
/* This operation sets the bit at the specified index to '0' */

/* Return a success code */
return (1);
}

#include "main.h"

/**
 * set_bit - sets the value of a bit to '1' at a given index
 * @n: the number to modify
 * @index: the index of the bit to set
 * Return: 1 on success, -1 on error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
    /* Check if the index is valid (between 0 and 63)*/
if (index > 63)
{
    /* Invalid index, return error */
return (-1);
}

    /* Set the bit at the given index to 1 */
*n |= (1 << index);
    /* Bitwise OR operation to set the bit at the given index */

    /* Return success */
return (1);
}

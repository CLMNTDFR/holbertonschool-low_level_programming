#include "main.h"

/**
 * _islower - Check for lowercase character
 * @c: the character to be checked
 *
 * Return: 1 for lower case or 0 for upper case
 */
int _islower(int c)
{
	if (c >= '97' && c <= '122')
	{
		return (1);
	}

	return (0);
}


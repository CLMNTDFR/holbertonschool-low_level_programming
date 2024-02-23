#include "main.h"

/**
 * _isalpha - Check if c is a letter, uppercase or lowercase
 * @c: the character to be checked
 *
 * Return: 1 if c is a letter or 0 overwise
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}

	return (0);
}

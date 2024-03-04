#include "main.h"
#include <stddef.h>

/**
 * _strchr - function that locates a character in a string
 * @s: the string that be checked
 * @c: the character we want to found
 *
 * Return: pointer to the first occurence of C in S, or NULL if is not found
 */
char *_strchr(char *s, char c)
{
	unsigned int index;

	for (index = 0; s[index] != '\0'; index++)
	{
		if (s[index] == c)
		{
			return (s + index);
		}
	}
	return (NULL);
}


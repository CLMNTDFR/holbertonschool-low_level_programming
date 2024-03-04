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
	for (; ; s++)/* Boucle infinie */
	{
		if (*s == c)
			return (s);
		if (*s == 0)/* caractère de fin de chaine */
			return (NULL);
	}
	return (NULL);
}


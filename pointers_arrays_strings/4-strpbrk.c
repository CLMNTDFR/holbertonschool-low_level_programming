#include "main.h"
#include <stddef.h>

/**
 * _strpbrk - function that searches a string for any of a set of bytes
 * @s: the string that be checked
 * @accept: charactere accepted in the checking
 *
 * Return: pointer to the byte in s that matches with accept
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	for (; ; s++)
	{
		for (i = 0; accept[i] != '\0'; i++)
		{
			if (*s == accept[i])
			{
				return (s);
			}
			if (*s == 0)
			{
				return (NULL);
			}
		}
	}
}


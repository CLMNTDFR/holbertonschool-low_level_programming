#include "main.h"

/**
 * *_strcpy - function that copies a string pointed by src in dest
 *
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int index;

	for (index = 0; src[index] != '\0'; index ++)
	{
		dest[index] = src[index];
	}

	dest[index] = '\0';

	return (dest);
}


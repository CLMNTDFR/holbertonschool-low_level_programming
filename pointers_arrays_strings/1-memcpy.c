#include "main.h"

/**
 * _memcpy - function that copies memory area from src to dest
 * @dest: memory area dest
 * @src: memory area src
 * @n: number of bytes we want to copies
 *
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int index;

	for (index = 0; index < n; index++)
	{
		dest[index] = src[index];
	}

	return (dest);
}

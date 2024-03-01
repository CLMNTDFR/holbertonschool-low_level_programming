#include "main.h"

/**
 * _strncpy - function that copies a string
 * @src: string source
 * @dest: string destination
 * @n: number of character to copies
 *
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int s_count = 0;
	int d_count = 0;

	while (src[s_count] != '0' && s_count < n)
	{
		dest[d_count] = src[s_count];
		d_count++;
		s_count++;
	}
	if (s_count < n)
	{
		while (d_count < n)
		{
			dest[d_count] = '\0';
			d_count++;
		}
	}
	return (dest);
}


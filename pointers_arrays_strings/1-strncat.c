#include "main.h"
#include <string.h>

/**
 * _strncat -  function that concatenates two strings.
 * @src: string source
 * @dest: string destination
 * @n: number
 *
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int d_count = 0;
	int s_count = 0;

	while (dest[d_count] != '\0')
	{
		d_count++;
	}

	while (src[s_count] != '\0' && s_count < n)
	{
		dest[d_count] = src[s_count];
		d_count++;
		s_count++;
	}

	dest[d_count] = '\0';
	return (dest);
}


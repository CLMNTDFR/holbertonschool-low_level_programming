#include "main.h"
/**
 * *_strcat - function that concatenates two strings
 * @src: the string source
 * @dest: the destination after concatenation
 *
 * Return: pointer to dest
 */
char *_strcat(char *dest, char *src)
{
	int d_count = 0;
	int s_count = 0;

	while (dest[d_count] != '\0')
	{
		d_count++;
	}

	while (src[s_count] != '\0')
	{
		dest[d_count] = src[s_count];
		d_count++;
		s_count++;
	}

	dest[d_count] = '\0';
	return (dest);
}



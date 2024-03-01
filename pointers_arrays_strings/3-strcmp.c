#include "main.h"

/**
 * _strcmp - function that compares two string
 * @s1: string 1
 * @s2: string 2
 *
 * Return:15, -15 or 0
 */
int _strcmp(char *s1, char *s2)
{
	while ((*s1 && *s2 != '\0') && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	if (*s1 == *s2)
	{
		return (0);
	}
	else
	{
		return (*s1 - *s2);
	}
}


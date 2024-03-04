#include "main.h"

/**
 * _strspn - function that gets the length of a prefix substring
 * @s: the string that be checked
 * @accept: charactere accepted in the checking
 *
 * Return: number of bytes in the initial segment of s
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int s_count = 0;
	unsigned int a_count = 0;

	while (s[s_count] != '\0')
	{
		while (accept[a_count] != '\0')
		{
			if (s[count] == accept[a_count])
			{
				break;
			}
			a_count++;
		}
		if (accept[a_count] == '\0')
		{
			break;
		}
		s_count++;
	}
	return (s_count);
}


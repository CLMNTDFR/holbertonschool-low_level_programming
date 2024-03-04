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
	unsigned int i = 0;

	while ((s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= 'a' && s[i] <= 'z'))
	{
		unsigned int j = 0; /* réinitialise j à chaque boucle */

		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				break;
			}
			j++;
		}
		if (accept[j] == '\0')
		{
			break;
		}
		i++;
	}
	return (i);
}


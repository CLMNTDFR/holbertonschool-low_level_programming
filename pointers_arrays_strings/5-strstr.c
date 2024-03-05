#include "main.h"
#include <stddef.h>
#include <string.h>

/**
 * _strstr - function that locates a substring
 * @needle: the substring
 * @haystack: the string
 *
 * Return: pointer to the beginning of the located substring or NULL
 */
char *_strstr(char *haystack, char *needle)
{
	/* Gestion de cas particulier si needle est vide */
	if (*needle == '\0')
	{
		return (NULL);
	}

	while (*haystack)
	{
		char *start = haystack;
		/* Enregistre la position de départ pour le return */

		/* Recherche de needle dans haystack */
		while (*needle == *haystack)
		{
			haystack++;
			needle++;
		}

		/* Si needle est vide il a été trouvé */
		if (*needle == '\0')
		{
			return (start);
		}

		/* Incrémente haystack pour la prochaine itération */
		haystack++;
	}
	return (NULL);
}


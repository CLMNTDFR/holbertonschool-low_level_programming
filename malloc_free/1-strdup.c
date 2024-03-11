#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* _strdup - function that returns pointer to a newly allocated space-memory
* @str: the string
*
* Return: pointer or NULL
*/
char *_strdup(char *str)
{
	int index = 0;

	int i;

	char *dest;

	if (str == NULL)
	{
		return (NULL);
	}
	/* calcul de la longueur de la chaine str */
	while (str[index] != '\0')
	{
		index++;
	}
	/* Allocation de mémoire pour la nouvelle chaine */
	dest = malloc(index * sizeof(char) + 1);

	/* check allocation succès */
	if (dest == NULL)
	{
		return (NULL);
	}

	/* copie des caractères */
	for (i = 0; i < index; i++)

	{
		dest[i] = str[i];
	}
	/* ajout du nul terminal */
	dest[index] = '\0';

	return (dest);
}

#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* str_concat - function that concatenates two strings
* @s1: the first string
* @s2: the second string
*
* Return: pointer or NULL
*/
char *str_concat(char *s1, char *s2)
{
	int s1_count = 0;

	int s2_count = 0;

	int i;

	int j;

	char *dest;

/* calcul de la longueur de s1*/
	while (s1[s1_count] != '\0')
	{
		s1_count++;
	}
/* calcul de la longueur de s2 */
	while (s2[s2_count] != '\0')
	{
		s2_count++;
	}
/* allocation de mémoire pour dest */
	dest = malloc((s1_count + s2_count + 1) * sizeof(char) + 1);
/* check succès mémoire */
	if (dest == NULL)
		return (NULL);
/* copie de s1 vers dest */
	for (i = 0; i < s1_count; i++)
	{
		dest[i] = s1[i];
	}
/* copie de s2 vers dest */
	for (j = 0; j < s2_count; i++, j++)

	{
		dest[i] = s2[j];
	}
	/* ajout du nul terminal */
	dest[i] = '\0';

	return (dest);
}

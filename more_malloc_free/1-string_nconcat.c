#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* string_nconcat - function that concatenates two strings
* @s1: the first string
* @s2: the second string
* @n: the n bytes of s2 we want to copy
*
* Return: pointer to the allocated memory or NULL(failed)
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int a, b;

	char *dest;

/* a: compteur s1; b: compteur s2 */

/* ckeck si un string est vide */
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
/* calcul de la longueur de s1*/
	for (a = 0; s1[a] != '\0'; a++)
	{
	}
/* calcul de la longueur de s2 */
	for (b = 0; s2[b] != '\0' && b < n; b++)
	{
	}
/* allocation de mémoire pour dest */
	dest = malloc(a + b + 1);
/* check succès mémoire */
	if (dest == NULL)
		return (NULL);
/* copie de s1 vers dest */
	for (a = 0; s1[a] != '\0'; a++)
	{
		dest[a] = s1[a];
	}
/* copie de s2 vers dest */
	for (b = 0; b < n && s2[b] != '\0'; b++)
	{
		dest[a + b] = s2[b];
	}
/* ajout du nul terminal */
	dest[a + b] = '\0';
	return (dest);
}

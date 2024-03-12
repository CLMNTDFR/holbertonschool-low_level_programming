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
	int a, b;
	char *dest;

/* ckeck si un string est vide */
	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
/* calcul de la longueur de s1*/
	for (a = 0; s1[a] != '\0'; a++)
	{
	}
/* calcul de la longueur de s2 */
	for (b = 0; s2[b] != '\0'; b++)
	{
	}
/* allocation de mémoire pour dest */
	dest = (char *) malloc(((a + b) + 1) * sizeof(char));
/* check succès mémoire */
	if (dest == NULL)
		return (NULL);
/* copie de s1 vers dest */
	for (a = 0; s1[a] != '\0'; a++)
	{
		dest[a] = s1[a];
	}
/* copie de s2 vers dest */
	for (b = 0; s2[b] != '\0'; b++)
	{
		dest[a] = s2[b];
		a++;
	}
	/* ajout du nul terminal */
	dest[a] = '\0';
	return (dest);
}

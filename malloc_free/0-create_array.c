#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* create_array - function that creates an array of chars, and initializes it
*                with a specific char.
*
* @size: This is the length of the array
* @c: This is the input character
*
* Return: An Array Initialized with the specific char
*/
char *create_array(unsigned int size, char c)
{
	unsigned int index;

	char *s;

/* *s pointeur vers le début de l'array alloué dynamiquement */

	s = (char *) malloc(size * sizeof(char));
/* malloc renvoie un pointeur vers le début de la mémoire allouée */
	if (s == NULL)
		return (NULL);
/* Vérifie si l'allocation a échoué */
	for (index = 0; index < size; index++)
	{
		s[index] = c;
/* Chaque élement du tableau est initialisé avec le caractère "c" */
	}
	return (s);
}

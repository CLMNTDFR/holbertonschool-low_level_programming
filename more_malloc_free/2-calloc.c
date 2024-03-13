#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* _calloc - function that allocates memory for an array using calloc
* @nmemb: number of elements
* @size: size of elements (in bytes)
*
* Return: pointer to allocated memory of NULL (failed)
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *p; /* pointeur de type générique */

	unsigned int i; /* compteur boucle for */

	if (nmemb == 0 || size == 0)
		return (NULL);

	p = malloc(nmemb * size); /* allocation bi-factorielle = NB x taille */
	if (p == NULL)
		return (NULL);

	for (i = 0; i < nmemb; i++)
	{
		*((char *)p + i * size) = 0;
		/**
		* initialisation de chaque élement à 0
		* cast en type char car char = 1 octet
		* nous sautons de i éléments de taille size dans le tableau
		*/
	}

	return (p);
}

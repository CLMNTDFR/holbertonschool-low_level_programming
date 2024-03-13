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
	char *p;

	unsigned int i; /* compteur boucle for */

	unsigned int x; /* taille totale de la mémoire allouée  */

	if (nmemb == 0 || size == 0)
		return (NULL);

	x = (nmemb * size); /* calcule taille totale */
	p = malloc(x); /* allocation de mémoire */
	if (p == NULL)
		return (NULL); /* check succès */

	for (i = 0; i < x; i++)
	{
		p[i] = 0;
		/* initialisation de chaque élement à 0 */
	}

	return (p);
}

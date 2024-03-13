#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* array_range - function that creates an array of integers
* @min: min value
* @max: max value
*
* Return: pointer or NULL if min > max or NULL (allocation failure)
*/
int *array_range(int min, int max)
{
	int i = 0; /* compteur d'élements */

	int a = 0;

	int b = min;

	int *p;

	if (min > max)
		return (NULL);

	while (b <= max)
	{
		a++; /* incrémente le compteur */
		b++; /* se déplace dans l'interval */
	}
	p = malloc(sizeof(int) * a);
	if (p == NULL)
		return (NULL); /* check allocation */

	b = min; /* réinitialise la valeur de b */
	for (i = 0; i < a; i++)
	{
		p[i] = b; /* assignation des éléments */
		b++;
	}
	return (p);
}

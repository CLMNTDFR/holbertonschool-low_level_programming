#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* alloc_grid - function that returns a pointer to a 2 dimensional array
* @width: width of the array
* @height: height of the array
*
* Return: pointer or NULL
*/
int **alloc_grid(int width, int height)
{
	int a, b;

	int **array;

/* ckeck si un W ou H est 0 ou négatif */
	if (width <= 0 || height <= 0)
		return (NULL);
/* Allocation mémoire pour chaque ligne */
	array = (int **)malloc(sizeof(int *) * height);
	if (array == NULL)
	{
		/* Si alloc échoue, libère la mémoire et returnNULL*/
		free(array);
		return (NULL);
	}

/* Allocation mémoire pour chaque colonne de chaque ligne */
	for (a = 0; a < height; a++)
	{
		array[a] = malloc(sizeof(int) * width);
		/* si alloc échoue, libère la mémoire */
		if (array[a] == NULL)
		{
			for (a = 0; a < height; a++)
			{
				free(array[a]);
			}
			free(array);
			return (NULL);
		}
	}
/* initialise chaque élément du tab à 0 */
	for (a = 0; a < height; a++)
	{
		for (b = 0; b < width; b++)
		{
			array[a][b] = 0;
		}
	}
	return (array);
}

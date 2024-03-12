#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* free_grid - function that frees a array
* @grid: the array
* @height: height of array
*
* Return: void
*/
void free_grid(int **grid, int height)
{
	int i;

/* Libération de la mémoire pour chaque ligne */
	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
/* Libération de la mémoire du tableau */
	free(grid);
}

#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - function that prints the sum of the 2 diagonals of square
 * @a: the array
 * @size: size of the array
 *
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int x;
	/**
	 * index parcourant les lignes et les colonnes car
	 * l'indice est le même sur une diagonale
	 */

	int temp1 = 0;
	int temp2 = 0;
/* considerons que le tableau est a une dimensions */
	for (x = 0; x < size; x++)
	{
		temp1 += a[x * size + x];
	}

	for (x = 0; x < size; x++)
	{
		temp2 += a[x * size + (size - 1 - x)];
		/**
		 * exemple: renvoie à l'indice a[5] dans un tableau de 3x3,
		 * donc l'élement 2 de la 2eme ligne
		 */
	}

	printf("%d, %d\n", temp1, temp2);

}

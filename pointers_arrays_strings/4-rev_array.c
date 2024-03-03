#include "main.h"

/**
 * reverse_array - function that reverses the content of an array of integers
 * @n: number of elements of the array
 * @a: the array
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int temporaire;
	int compt;

	for (compt = 0; compt < (n / 2); compt++)
	{
		temporaire = a[compt];
		a[compt] = a[n - compt - 1];
		a[n - compt - 1] = temporaire;
	}
}


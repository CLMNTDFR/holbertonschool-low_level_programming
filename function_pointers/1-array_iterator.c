#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>

/**
* array_iterator - function that executes a function given as a
* parameter on each element of an array
*
* @array: integrer array
* @size: size of a array - size_t est un type comme "int"
* @action: function to execute on each element of the array
*
* Return: nothing
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i; /* datatype (unsigned) pour stocker des tailles d'objet */

/* vérification pour garantir que le code se comporte correctement */
	if (array == NULL || action == NULL)
		return;

/* Itération dans l'array pour y executer l'action */
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}

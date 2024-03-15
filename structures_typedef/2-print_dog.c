#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
* print_dog - function that prints a struct dog
* @d: pointer to the structure
*
* Return: void
*/
void print_dog(struct dog *d)
{
	if (d)
	{
/* Gestion de name */
		if (d->name != NULL)
		{
			printf("Name: %s\n", d->name);
		}
		else
		{
			printf("Name: (nil)\n");
		}
/* Gestion de age (type float donc ne peut renvoyer NULL)*/
		printf("Age: %f\n", d->age);
/* Gestion de owner */
		if (d->owner != NULL)
		{
			printf("Owner: %s\n", d->owner);
		}
		else
		{
			printf("Owner: (nil)\n");
		}
	}
}

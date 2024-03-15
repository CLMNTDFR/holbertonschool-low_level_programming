#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
* init_dog - function that initialize a variable of type struct dog
* @d: pointer to the structure
* @name: name of the dog
* @age: age of the dog
* @owner: owner of the dog
*
* Return: void
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL) /* Si le pointeur n'est pas nul */
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
/* la valeur "name" est donnée à la variable d->name par exemple */
	}
}

#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
* new_dog - function that creates a new dog
* @name: name of the dog
* @age: age of the dog
* @owner: owner of the dog
*
* Return: pointer to new dog struct or NULL if function fails
*/
dog_t *new_dog(char *name, float age, char *owner)
{
/* Déclaration d'un pointeur vers une nouvelle structure  */
	dog_t *new_dog;
	int i; /* Compteur pour les boucles for (copie) */

/* Allocation mémoire nouvelle structure */
	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);
/* Allocation mémoire pour "name" */
	new_dog->name = malloc(sizeof(name) + 1);
	if (new_dog->name == NULL)
	{
		free(new_dog);
		return (NULL);
	}
/* Allocation mémoire pour "owner" */
	new_dog->owner = malloc(sizeof(owner) + 1);
	if (new_dog->owner == NULL)
	{
		free(new_dog->name);
		free(new_dog);
		return (NULL);
	}
/* Copie du "name" et "owner" dans nouvelle struct */
	for (i = 0; name[i] != '\0'; i++)
	{
		new_dog->name[i] = name[i];
		new_dog->name[i] = '\0';
	}
	for (i = 0; owner[i] != '\0'; i++)
	{
		new_dog->owner[i] = owner[i];
		new_dog->owner[i] = '\0';
	}
/* Copie de "age" */
	new_dog->age = age;

	return (new_dog);
}

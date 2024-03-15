#include "dog.h"
#include <stdlib.h>

/**
* _strlen - length array
*
* Description: 'This function calculates the length of a char array
* and returns it'
*
* @array: Char array
*
* Return: length array
*/

int _strlen(char *array)
{
	int length = 0;

	for (; array[length] != '\0';)
	{
		length++;
	}

	return (length);
}

/**
* new_dog - Creates a new dog
*
* Description: 'This function creates a new dog and initialise it.
* She returns the pointer of the struct or Null if insufficient memory
* was available and frees the doc_t struct'
*
* @name: Char pointer
* @age: Float variable
* @owner: Char pointer
*
* Return: Pointer or Null (Success or insufficient memory)
*/

dog_t *new_dog(char *name, float age, char *owner)
{
	int length_name, length_owner, index;
/* Déclaration d'un pointeur vers une nouvelle structure  */
	dog_t *new_dog;

	length_name = _strlen(name);
	length_owner = _strlen(owner);
/* Allocation mémoire nouvelle structure */
	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);
/* Allocation mémoire pour "name" */
	new_dog->name = malloc(length_name * sizeof(char) + 1);
	if (new_dog->name == NULL)
	{
		return (NULL);
		free(new_dog);
	}
/* Allocation mémoire pour "owner" */
	new_dog->owner = malloc(length_owner * sizeof(char) + 1);
	if (new_dog->owner == NULL)
	{
		return (NULL);
		free(new_dog->name);
		free(new_dog);
	}
/* Copie du "name" dans nouvelle struct */
	for (index = 0; index < length_name; index++)
		new_dog->name[index] = name[index];
	new_dog->name[index] = '\0';
/* Copie de "age" */
	new_dog->age = age;
/* Copie du "owner" dans nouvelle struct */
	for (index = 0; index < length_owner; index++)
		new_dog->owner[index] = owner[index];
	new_dog->owner[index] = '\0';

	return (new_dog);
	free(new_dog->owner);
	free(new_dog->name);
	free(new_dog);
}

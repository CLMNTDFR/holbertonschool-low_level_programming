#include <stdlib.h>
#include "dog.h"

/**
* free_dog - frees dogs
*
* Description: 'This function frees the memory allocated by dog_t
* and return nothing'
*
* @d: Struct dog_t pointer
*
* Return: Nothing
*/

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->owner);
		free(d->name);
		free(d);
	}
}

#ifndef DOG_H
#define DOG_H

#include <stdlib.h>
#include <stdio.h>

/**
* struct dog - strucuture to define many info for each dog
* @name: name of the dog
* @age: age of the dog
* @owner: owner of the dog
*/

struct dog
{
	char *name;

	float age;

	char *owner;

};

#endif

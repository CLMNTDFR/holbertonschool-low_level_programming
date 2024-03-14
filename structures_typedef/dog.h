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

dog_t *new_dog(char *name, float age, char *owner);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
void free_dog(dog_t *d);

#endif

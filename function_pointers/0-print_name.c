#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
* print_name - function that print a name
* @name: name of the person
* @f: the input function to print the name
*
* Return: Nothing.
*/
void print_name(char *name, void (*f)(char *))
{
/* Vérification pour savoir si "f" et "name" sont différents de NULL */
	if (f != NULL && name != NULL)
	{
		f(name);
	}
/* La fonction de 0-main.c effectue le reste */
}

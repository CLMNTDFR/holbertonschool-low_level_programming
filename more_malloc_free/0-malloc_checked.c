#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* malloc_checked -  function that allocates memory using malloc
* @b: This is the length to allocate in the memory
*
* Return: Returns a pointer to the allocated memory
* if malloc fails, the malloc_checked function should cause normal
* process termination with a status value of 98
*/
void *malloc_checked(unsigned int b)
{
	void *p;

/* pointeur: générique vers n'importe quel type de donné */
/* si besoin, le pointeur sera "casté" vers un autre type de donné */
	p = malloc(b);

	if (p == NULL)
		exit(98);
/* arrête l'exe du programme et renvoie le code de statut 98 */
	return (p);
}

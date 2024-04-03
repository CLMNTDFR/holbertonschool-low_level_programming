#include "lists.h"

/**
* print_dlistint - function that prints all the elements of a list
* @h: pointer to the start of the list
*
* Return: the number of node
*/
size_t print_dlistint(const dlistint_t *h)
{
	int index = 0;

/* while loop to iterate through the linked list */
	while (h != NULL)
	{
		printf("%d\n", h->n); /* print the data of the current node */

		index++; /* increment counter */

		h = h->next; /* jump to the next element */
	}
	return (index);
}

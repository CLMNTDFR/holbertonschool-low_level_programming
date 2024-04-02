#include "lists.h"

/**
* print_list - Function that prints all the elements of a list_t list
* @h: A pointer to the start of the list
*
* Return: The number of nodes in the list
*/
size_t print_list(const list_t *h)
{
	size_t node = 0; /* node counter */
	const list_t *current = h;

	while (current != NULL)
	{
		if (current->str == NULL) /* check error */
			printf("[0] (nil)\n");
		else
			printf("[%lu] %s\n", current->len, current->str);

		current = current->next; /* jump to the next element of linkly list */
		node++; /* increment node counter */
	}

	return (node);
}

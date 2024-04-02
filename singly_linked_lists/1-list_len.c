#include "lists.h"

/**
* list_len - Function that returns number of elements in a linked list_t list
* @h: A pointer to the start of the list
*
* Return: The number of nodes in the list
*/
size_t list_len(const list_t *h)
{
	size_t element_count = 0; /* element counter */
	const list_t *current = h;

	while (current != NULL)
	{
		element_count++; /* increment elements counter */
		current = current->next; /* jump to the next element of linkly list */
	}
	return (element_count);
}

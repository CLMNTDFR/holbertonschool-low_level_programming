#include "lists.h"

/**
* dlistint_len - function that returns the number of elements in list
* @h: pointer to the start of the list
*
* Return: size of the list
*/
size_t dlistint_len(const dlistint_t *h)
{
	size_t element_count = 0; /* element counter */
	const dlistint_t *current = h;

	while (current != NULL)
	{
		element_count++; /* increment elements counter */
		current = current->next; /* jump to the next element of linkly list */
	}
	return (element_count);
}

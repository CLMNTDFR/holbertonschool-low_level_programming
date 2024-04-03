#include "lists.h"

/**
* get_dnodeint_at_index - function that returns the nth node of a list
* @head: pointer to the start of the list
* @index: the nth node to return
*
* Return: the nth node or NULL if the node doesn't exist
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *retour_node = head;
	/* initialize retour_node to head */

	while (retour_node != NULL && index > 0)
	{
		retour_node = retour_node->next;
		/* jump to the next node */
		index--;
		/* decrement index until it matches */
	}

	if (index > 0) /* If index is still greater than 0, node doesn't exist */
	{
		return (NULL);
	}
	else
	{
		return (retour_node);
	}
}

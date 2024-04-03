#include "lists.h"

/**
* sum_dlistint - function that returns the sum of all the
* data (n) of a dlistint_t linked list.
* @head: pointer to the start of the list
*
* Return: an integer (sum of all data) or 0 if list is empty
*/
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	dlistint_t *index_node = head;
	/* initialize index_node to head */

	if (index_node == NULL)
		return (0);

	while (index_node != NULL)
	{
		sum += index_node->n;
		index_node = index_node->next;
	}
	return (sum);
}

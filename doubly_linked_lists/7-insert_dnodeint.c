#include "lists.h"

/**
* insert_dnodeint_at_index - function that inserts a node at a given position
* @h: pointer to pointer to the start of the list
* @idx: index of the list where the new node should be added
* @n: new node's data
*
* Return: the address of the new node, or NULL if it failed
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp = *h;
	dlistint_t *new_node;

	unsigned int index = 0;

	/* case where idx is 0, we call previous function to add at the start */
	if (idx == 0)
		return (add_dnodeint(h, n));

	/* Iterate to find the index */
	while (temp != NULL && index < idx - 1)
	{
		temp = temp->next;
		index++;
	}

	/* allocate memory and check success */
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	/* attribute the data into new node */
	new_node->n = n;

	/* insert new_node into the list */
	new_node->next = temp->next;
	new_node->prev = temp;

	if (temp->next != NULL)
	{
		temp->next->prev = new_node;
	}
	temp->next = new_node;

	return (new_node);
}

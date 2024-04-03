#include "lists.h"

/**
* add_dnodeint_end - function that adds a new node at end of a dlistint_t
* @head: pointer of pointer to the start of the list
* @n: an integer
*
* Return: the address of the new element, or NULL if it failed
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *last_node = *head;
	/* Allocate memory space for a new node */
	/* and define a last_node to jump to the end of the list */

	new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
		return (NULL);
	/* Check success of allocation */

	new_node->n = n; /* assign n value to new_node */

	new_node->next = NULL; /* define next pointer of new_node to NULL */

	if (*head == NULL)
	{
		new_node->prev = NULL;
		/* if list is empty, define previous pointer to NULL too */
		*head = new_node;
		return (new_node);
	}
	while (last_node->next != NULL)
	/* jump until the end of the list */
	{
		last_node = last_node->next;
	}
	new_node->prev = last_node;
	/* define new_node previous pointer to last_node */
	last_node->next = new_node;
	/* define ancien last-node next pointer to new_node */

	return (new_node); /* Return the address of the new node */
}


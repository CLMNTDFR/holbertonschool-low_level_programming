#include "lists.h"

/**
* add_dnodeint - function that adds a new node at the beginning of a list
* @head: pointer of pointer to the start of the list
* @n: an integer
*
* Return: address of new element or NULL if it failed
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node; /* Allocate memory space for a new node */

	new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
		return (NULL);
	/* Check success of allocation */

	new_node->n = n; /* assign n value to new_node */

	new_node->prev = NULL; /* define previous pointer of new_node to NULL */

	if (*head == NULL)
	{
		new_node->next = NULL;
		/* if list is empty, define next pointer to NULL too */
	}
	else
	{
		new_node->next = *head;
		/* else, define new_node next pointer to actual head */

		(*head)->prev = new_node;
		/* define head previous pointer to new_node */
	}
	*head = new_node;
	/* define new_node as actual head */

	return (new_node);
	/* return the adresse of the new_node */
}

#include "lists.h"

/**
* delete_dnodeint_at_index - deletes the node at index of a linked list
* @head: head of the structure
* @index: index of the node that should be deleted
* Return: 1 if it succeeded, -1 if it failed
*/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp = *head;
	unsigned int index_node = 0;

	/* Handles the case where the list is empty */
	if (temp == NULL)
		return (-1);

	/* Handles the case where the node to be deleted is the first node */
	if (index == 0)
	{
		*head = temp->next;
		if (*head != NULL)
			(*head)->prev = NULL;

		free(temp);
		return (1);
	}

	/* Traverses the list until the node to be deleted is found */
	while (index_node < index && temp != NULL)
	{
		temp = temp->next;
		index_node++;
	}

	/* Checks if the index is out of bounds */
	if (temp == NULL)
		return (-1);

	/* Updates the next pointer of the previous node */
	if (temp->prev != NULL)
		temp->prev->next = temp->next;

	/* Updates the previous pointer of the next node */
	if (temp->next != NULL)
		temp->next->prev = temp->prev;

	free(temp);
	return (1);
}

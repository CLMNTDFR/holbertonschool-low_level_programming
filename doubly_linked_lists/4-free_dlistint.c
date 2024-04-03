#include "lists.h"

/**
* free_dlistint - function that frees a dlistint_t list
* @head: pointer to the start of the list
*
* Return: void
*/
void free_dlistint(dlistint_t *head)
{
	dlistint_t *next_node;

	while (head != NULL)
	{
		next_node = head->next;
		free(head);
		head = next_node;
	}
}

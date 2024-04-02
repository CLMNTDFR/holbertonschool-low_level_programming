#include "lists.h"

/**
* free_list - function that frees each elements of a list_t
* @head: pointer to the start of the list
*
* Return: void
*/
void free_list(list_t *head)
{
	list_t *temp;

	while (head != NULL)
	{
		temp = head; /* Store the current node */
		head = head->next; /* Jump to the next node */
		free(temp->str); /* Free the memory allocated to the string */
		free(temp); /* Free the memory allocated to the node */
	}
	head = NULL; /* Update the head pointer to NULL */
}

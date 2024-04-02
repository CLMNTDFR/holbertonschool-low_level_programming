#include "lists.h"
/**
* _strlen - function that count the length of a string
* @string: the string that be checked
*
* Return: the length of the string
*/
int _strlen(const char *string)
{
	int length;

	for (length = 0; string[length] != '\0'; length++)
	{
	}
	return (length);
}

/**
* *add_node_end - function that adds a new node at the end of a list_t list
* @head: pointer of pointer to the start of the list
* @str: a string to add to the beginning of the list
*
* Return: the address of the new element, or NULL if it failed
*/
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node; /* Allocate memory space for a new node */

	new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
		return (NULL);
	/* Check success of allocation */

	new_node->str = strdup(str);
	/* Duplicate string */

	new_node->len = _strlen(str);
	/* Assign the length of the string */

	new_node->next = NULL; /* Set the next of new_node to NULL */

	if (*head == NULL)
	{
		*head = new_node; /* If list is empty, set new_node as the head */
	}
	else
	{
		list_t *current = *head;

		while (current->next != NULL)
		{
			current = current->next;
		}
		current->next = new_node; /* Add new_node at the end of the list */
	}

	return (new_node); /* Return the address of the new node */
}

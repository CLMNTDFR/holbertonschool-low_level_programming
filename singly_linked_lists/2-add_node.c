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
* *add_node - function that adds a new node at the beginning of a list_t list
* @head: pointer of pointer to the start of the list
* @str: a string to add to the beginning of the list
*
* Return: the address of the new element, or NULL if it failed
*/
list_t *add_node(list_t **head, const char *str)
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

	new_node->next = *head;
	/* Assign the new_node + 1 at the current head of the list */

	*head = new_node;
	/* Assign the pointer head on new_node */

	return (new_node);
}

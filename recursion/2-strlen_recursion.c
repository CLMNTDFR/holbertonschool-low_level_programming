#include "main.h"

/**
 * _strlen_recursion - function that returns the length of a string
 * @s: the string that be checked
 *
 * Return: int (string length)
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	/* cas de base : la chaine est vide */

	return (1 + _strlen_recursion(s + 1));
	/* appel recursif et incrementation de length */
	/* "1 +" sert à compter le caractere actuel */
}


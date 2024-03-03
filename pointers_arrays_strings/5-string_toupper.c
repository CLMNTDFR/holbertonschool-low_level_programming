#include "main.h"

/**
 * string_toupper - function that changes lower to uppercase
 * @str: pointer of character variable
 *
 * Return: the string with only uppercase (str)
 */
char *string_toupper(char *str)
{
	int index;

	for (index = 0; str[index] != '\0', index++)
	{
		if (str[index] >= 'a' && str[index] <= 'z')
		{
			str[index] = str[index] - 32;
		}
	}
	return (str);
}


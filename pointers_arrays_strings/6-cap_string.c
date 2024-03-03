#include "main.h"

/**
 * cap_string - function that capitalizes all worlds of a string
 * @str: the string that is checked
 *
 * Return: The string (str)
 */
char *cap_string(char *str)
{
	int index = 0;

	for (index = 0; str[index] != '\0'; index++)
	{
		if (str[index] == ' ' ||
		str[index] == '\t' ||
		str[index] == '\n' ||
		str[index] == ',' ||
		str[index] == ';' ||
		str[index] == '.' ||
		str[index] == '!' ||
		str[index] == '?' ||
		str[index] == '"' ||
		str[index] == '(' ||
		str[index] == ')' ||
		str[index] == '{' ||
		str[index] == '}')
		{
			if (str[index + 1] >= 'a' && str[index + 1] <= 'z')
			{
				str[index + 1] = str[index + 1] - 32;
			}
		}
	}
	return (str);
}


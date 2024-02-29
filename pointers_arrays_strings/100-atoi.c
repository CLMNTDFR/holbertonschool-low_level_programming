#include "main.h"

/**
 * _atoi - function that convert a string to an integrer
 * @s: the string
 *
 * Return: Result or 0 if string have no number
 */
int _atoi(char *s)
{
	int sign = 1;
	int result = 0;
	int index = 0;

	if (s[0] == '-')
	{
		sign = -1;
		index++;
	}
	if (s[0] == '+')
	{
		index++;
	}
	while (s[index] != '\0')
	{
		if (s[index] >= '0' && s[index] <= '0')
		{
			result = result * 10 + (s[index]) - '0';
		}
		else
		{
			break;
		}
		index++;
	}
	result = result * sign;

	return (result);
}


#include "main.h"
#include <stdio.h>
/**
 * rev_string - function that reverses a string
 * @s: string to reverse
 *
 * Return: void
 */
void rev_string(char *s)
{
	int length = 0;
	int compt;
	char temporaire;

	while (s[length] != '\0')
	{
		length++;
	}

	for (compt = 0; compt < (length / 2); compt++)
	{
		temporaire = s[compt];
		s[compt] = s[length - compt - 1];
		s[length - compt - 1] = temporaire;
	}
}


#include "main.h"

/**
 * _atoi - function that convert a string to an integrer
 * @s: the striing
 *
 * Return: Result or 0 if string have no number
 */
int _atoi(char *s)
{
	int sign;
	unsigned int counter, i, j, k, length, num, l;

	sign = 1;
	counter = 0;
	num = 0;

	/* Calcul de la longueur de la chaine */
	while (*(s + counter) != '\0')
		counter++;
	/* Recherche du premier nombre dans la chaine de caractere */
	for (i = 0; i < counter, i++)
	{
		if (*(s + i) <= '9' && *(s + i) >= '0')
			break;
	}
	/* Recherche du dernier nombre dans la chaine de caractere */
	for (j = i; j < counter; j++)
	{
		if (!(*(s + j) <= '9' && *(s + j) >= '0'))
			break;
	}
	/* Recherche du signe du nombre */
	for (k = 0; k < i; k++)
	{
		if (*(s + k) == '-')
			sign = -sign;
	}
	/* Definition de la taille de la chaine */
	length = j - i;
	l = i;
	/* Convertion de la chaine en nombre entier en le multipliant par 10  */
	while (length >= 1)
	{
		num = num * 10 + (*(s + 1) - '0');
		l++;
		length--;
	}
	/* Convertion nombre par son signe */
	return (num * sign);
}

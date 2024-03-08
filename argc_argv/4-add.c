#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * main - Entry point - program that adds positive numbers
 * @argc: counter of arguments
 * @argv: variables of arguments
 *
 * Return: 0 (no number passed) 1 (if one char is a no-digit)
 */
int main(int argc, char *argv[])
{
	int i, j, sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
/* si aucun argument on retourne 0 */
	for (i = 1; i < argc; i++)
	{
/* boucle pour parcourir les arguments */
		int valid = 1;

		for (j = 0; argv[i][j] != '\0'; j++)
		{
/* boucle pour parcourir les caractères de chaque argument */
			if (!isdigit(argv[i][j]))
			{
				valid = 0;
				break;
			}
/* si caractère non numérique: break */
		}

		if (!valid || (argv[i][0] == '0' && argv[i][1] != '\0'))
		{
			printf("Error\n");
			return (1);
		}
/* si nombre commençant par 0 > non valid */
	sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
/* convertion atoi et addition */
}


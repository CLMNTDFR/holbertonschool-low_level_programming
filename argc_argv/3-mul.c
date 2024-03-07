#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point - program that multiplies two numbers
 * @argc: counter of arguments
 * @argv: variables of arguments
 *
 * Return: 1 if not receive two arguments
 */
int main(int argc, char *argv[])
{
	int i, mult = 1;

	if (argc == 3)
	/* si il  reçois au moins deux arguments (+ son nom) */
	{
		for (i = 1; i < argc; i++)
		{
			mult *= atoi(argv[i]);
		}
		printf("%d\n", mult);
		return (0);
	}
	else
	{
	printf("Error\n");
	return (1);
	}
}


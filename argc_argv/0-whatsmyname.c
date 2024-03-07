#include <stdio.h>

/**
 * main - Point Entry
 * @argc: counter of arguments
 * @argv: variables of arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	if (argc > 0)
		printf("%s\n", argv[0]);

	return (0);
}


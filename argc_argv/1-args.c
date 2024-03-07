#include <stdio.h>

/**
 * main - Entry Point
 * @argc: counter of arguments
 * @argv: variables of arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, __attribute__((unused))char *argv[])
{
	printf("%d\n", argc - 1);
/** Nous ne voulons que le nombre d'arguments passés dans
 * la commande, nous soustrayons 1 pour qu'il ignore son
 * propre nom (qui est aussi un argument).
 */
	return (0);
}


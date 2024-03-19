#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
* main - Entry point
* @argc: Argument count
* @argv: Argument vector
*
* Return: 0 on success, otherwise exit with error code
*/
int main(int argc, char *argv[])
{
	int a, b; /* Création de deux variables pour convertion atoi */

/* Déclaration pointeur de fonction */
	int (*operateur)(int, int);

/* Vérifie si il y a plus de 3 arguments passés (nb/operateur/nb) */
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

/* Vérifie si le 2eme caractère de l'opérateur est bien '\0' */
/* Exemple: "+\0" est correct, "++\0" est incorrect */
	if (argv[2][1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}
/* "operateur" est une variable de type pointeur de fonction qui va */
/* stocker le résultat de "get_op_func"*/
	operateur = get_op_func(argv[2]);

/* Vérifie si l'opérateur est valide */
	if (operateur == NULL)
	{
		printf("Error\n");
		exit(99);
	}

/* Convertit les arguments en entiers */
	a = atoi(argv[1]);
	b = atoi(argv[3]);

/* Exécute l'opération et affiche le résultat */
	printf("%d\n", operateur(a, b));
	return (0);
}

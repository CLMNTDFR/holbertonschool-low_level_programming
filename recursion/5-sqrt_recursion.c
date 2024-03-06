#include "main.h"

/**
 * _square_root - wrapper function for calculate the sqrt and init x
 * @n: the number that be checked
 * @x: maybe the sqrt
 *
 * Return: the natural square root, or -1 if sqrt doesn't exist
 */
int _square_root(int n, int x)
{
	if (x * x > n)
		return (-1);
	/* n'est pas une racine carré naturelle */
	if (x * x == n)
		return (x);
	/* est une racine carré naturelle */

	return (_square_root(n, x + 1));
}

/**
 * _sqrt_recursion - function that returns natural square root of number
 * @n: the number that be checked
 *
 * Return: the natural square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (n);
	/* gestion des cas particuliers pour éviter recursion inutile */

	return (_square_root(n, 0));
	/* réinitialisation de x à 0 pour nouvelle boucle */
}


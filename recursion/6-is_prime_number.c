#include "main.h"

/**
 * _inception - function wrapper for init d
 * @n: the number that be checked
 * @d: potential diviser
 *
 * Return: 1 if primal, otherwise 0
 */
int _inception(int n, int d)
{
	/* base case */
	if (d * d > n)
		return (1);
	/* si aucun diviseur trouvé, n est prime */
	if (n % d == 0)
		return (0);
	/* si n est divisible par d il n'est pas prime */
	return (_inception(n, d + 1));
}

/**
 * is_prime_number - test if  n is a prime number and manage specific cases
 * @n: the number that be checked
 *
 * Return: 1 if primal, otherwise 0
 */
int is_prime_number(int n)
{
/* specific cases */
	if (n <= 1)
		return (0);
	/* les nombres négatifs et 0 ne sont pas des nombres premiers */
	if (n % 2 == 0)
		return (0);
	/* tous les nombres paires sont divisibles par 2 */
	return (_inception(n, 2));
	/* d est initialise a 2 car prime est divisible par 1 ou plus */
}


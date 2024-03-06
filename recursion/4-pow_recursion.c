#include "main.h"

/**
 * _pow_recursion - function that returns value of x to the power of y
 * @x: value of x
 * @y: power
 *
 * Return: int (x power y) or -1 if y is lower than O
 */
int _pow_recursion(int x, int y)
{
	/* -1 est un message d'erreur */
	if (y < 0)
		return (-1);
	/* la puissance de x a la puissance 0 est toujours egal a 1 */
	if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}


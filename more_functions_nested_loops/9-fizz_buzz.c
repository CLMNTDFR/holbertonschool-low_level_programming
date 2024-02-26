#include <stdio.h>
#include "main.h"

/**
 * main - function for fiiiiiiiiizz buuuuuuuuuuuzz
 *
 * Return: Always O (Success)
 */

int main(void)
{
	int x;

	for (x = 1; x <= 100; x++)
	{
		if (x == 100)
		{
			printf("Buzz");
			printf("\n");
		}
		else if ((x % 3 == 0) && (x % 5 == 0))
		{
			printf("FizzBuzz ");
		}
		else if (x % 5 == 0)
		{
			printf("Buzz ");
		}
		else if (x % 3 == 0)
		{
			printf("Fizz ");
		}
		else
		{
			printf("%d ", x);
		}

	}

	return (0);
}


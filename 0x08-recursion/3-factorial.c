#include "main.h"

/**
 * factorial - function that calculate factorial of a number
 *
 * @n: given number input
 *
 * Return: int
*/

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}


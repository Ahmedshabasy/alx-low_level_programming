#include "main.h"

/**
 * _sqrt_recursion - function that calculate square root
 *
 * @n: input vlue
 * @val: square root
 *
 * Return: int
*/

int square(int n, int val);
int _sqrt_recursion(int n)
{
	return (square(n, 1));
}

/**
 * _sqrt_recursion - function calculate sqaure root
 *
 * @n: function input
 *
 * Return: int
*/

int _sqrt_recursion(int n, int val)
{
	if (val * val == n)
		return (val);
	else if (val * val < n)
		return (square(n, val + 1));
	else
		return (-1);
}

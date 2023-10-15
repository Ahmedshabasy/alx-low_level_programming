#include "main.h"

/**
 * print_diagonal - print a diagonal line
 *
 * @n: numer of times the \ printed
 */

void print_diagonal(int n)
{
	int postn, space;

	if (n <= 0)
		_putcahr('\n');
	else
	{
		for (postn = 1; postn <= n; postn++)
		{
			for (space = 1; space <= postn; space++)
				_putchar(' ');
			_putchar(92);
			_putchar('\n');
		}
	}
}
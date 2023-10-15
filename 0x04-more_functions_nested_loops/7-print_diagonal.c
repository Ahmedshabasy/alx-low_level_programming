#include "main.h"

/**
 * print_diagonal - print a diagonal line
 *
 * @n: numer of times the \ printed
 */

void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
	{
		_putcahr('\n');
		return;
	}
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= i; j++)
			{
				_putchar(' ');
			}
			_putchar(92);
			_putchar('\n');
		}
}

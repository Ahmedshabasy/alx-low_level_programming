#include "main.h"

/**
 * print_square - print square using #
 *
 * @size: size of squae
 *
 * Return: 0 (success)
 */

void print_square(int size)
{
	int row, column;

	if (size <= 0)
	{
		_putchar('\n');
	}
	for (row = 1; row < size; row++)
	{
		for (column = 1; column < size; column++)
			_putchar('#');
		_putchar('\n');
	}
}

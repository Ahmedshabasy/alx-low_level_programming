#include "main.h"

/**
 * print_numbers - print numbers from 0 to 9
 *
 * return: 0 (success)
 */

void print_numbers(void)
{
	int num = 0;

	for (num = 0; num <= 9; num++)
		_putchar("%d", num);
	return (0);
}

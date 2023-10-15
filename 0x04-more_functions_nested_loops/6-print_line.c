#include "main.h"

/**
 * print_line - print a straight line
 *
 * @n: number of times the _ should printed
*/

void print_line(int n)
{
	int i;

	if (n <= 0){
		_putchar('\n');
		return;
	}
		for (i = 1; i <= n; i++){
			_putchar('_');
	}
		_putchar('\n');
}

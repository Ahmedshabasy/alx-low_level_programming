#include "main.h"

/**
 * print_to_98 - print number till 98 separated by comma
 *
 * @n: input.
 */

void print_to_98(int n)
{
	int count;

	if (n > 98)
		for (count = n; n > 98; count--)
			printf("%d, ", count);
	else
		for (count = n; n < 98; count++)
			printf("%d, ", count);
	printf("98\n");
}

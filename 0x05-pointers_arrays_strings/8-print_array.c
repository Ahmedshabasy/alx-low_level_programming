#include "main.h"

/**
 * print_array - function that prints arrays
 *
 * @a: array input
 * @n: numbers of array elements
 */

void print_array(int *a, int n)
{
	for (int i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i != n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}

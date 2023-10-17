#include "main.h"

/**
 * swap_int - change the value of two parameters *a and *b
 *
 * @a: input parameter 1
 * @b: input parameter 2
 *
 * Return: nothing
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

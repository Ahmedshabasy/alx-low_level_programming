#include "main.h"

/**
 * *malloc_checked - allocates memory using malloc
 *
 * @i: int
 *
 * Return: pointer to the array initialized or NULL
*/

void *malloc_checked(unsigned int b)
{
	int *i = malloc(b);

	if (i == 0)
		exit(98);

	return (m);
}

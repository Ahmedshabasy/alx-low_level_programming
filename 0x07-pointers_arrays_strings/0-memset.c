#include "main.h"

/**
 * _memset - function that fill memory with constant byte
 *
 * @s: string input
 * @b: constant input
 * @n: times of rebeted
 *
 * Return: string s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; n > 0; i++, n--)
	{
		s[i] = b;
	}

	return (s);
}

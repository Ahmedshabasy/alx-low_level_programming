#include "main.h"

/**
 * _memcpy - fuction that copy from one string to another
 *
 * @dest: destination input
 * @src: sourse input
 * @n: number of characters in string
 *
 * Return: destinatio
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}

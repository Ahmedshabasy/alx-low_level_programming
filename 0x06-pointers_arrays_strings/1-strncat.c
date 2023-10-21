#include "main.h"

/**
 * _strncat - function that concatenates two strings.
 *
 * @dest: destination input
 * @src: pointer  input
 * @n: must icluded in concate
 *
 * Return: dest.
 */

char *_strncat(char *dest, char *src, int n)
{
	int c, i;

	c = 0;

	while (dest[c])
		c++;

	for (i = 0; i < n && != '\0'; i++)
		dest[c + i] = src[i];
	dest[c + i] = '\0';

	return (dest);
}

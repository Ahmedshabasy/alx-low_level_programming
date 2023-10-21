#include "main.h"

/**
 * *_strcat - concate string into another
 *
 * @dest: the destination input
 * @src: structure input
 *
 * Return: pointer is returning string dest
 */

char *_strcat(char *dest, char *src)
{
	int c, c2;

	c = 0;

	while (dest[c])
		c++;

	for (c2 = 0; src[c2]; c2++)
		dest[c++] = src[c2];

	return (dest);
}

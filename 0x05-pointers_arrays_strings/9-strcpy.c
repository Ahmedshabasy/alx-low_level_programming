#include "main.h"

/**
 * *_strcpy - function that copies the string pointed
 *
 * @dest: pointed place to string
 * @src: place where string is
 *
 * Return: starting address of dest
 */

char *_strcpy(char *dest, char *src)
{
	char *start = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (start);
}

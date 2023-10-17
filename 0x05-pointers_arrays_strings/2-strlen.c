#include "main.h"

/**
 * _strlen - state the length of the string
 *
 * @s: string input
 *
 * Return: length (success)
 */

int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}

	return (length);
}

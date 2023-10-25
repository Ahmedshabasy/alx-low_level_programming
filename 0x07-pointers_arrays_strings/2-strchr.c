#include "main.h"

/**
 * _strchr - function that dedict first occasion character
 *
 * @s: pointer input
 * @c: character input
 *
 * Return: pointer of s
 */

char *_strchr(char *s, char c)
{
	int n;

	for (n = 0; s[n] >= 0; n++)
	{
		if (s[n] == c)
		{
			return (s + n);
		}
	}
	return ('\0');
}

#include "main.h"

/**
 * _strspn - function that get length of substring
 *
 * @s: pointer of string input
 * @accept: second string input
 *
 * Return: lenth of substring
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int x, y;

	for (x = 0; s[x] != '\0'; x++)
	{
		for (y = 0; accept[y] != s[x]; y++)
		{
			if (accept[y] == '\0')
			{
				return (x);
			}
		}
	}
	return (x);
}

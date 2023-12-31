#include "main.h"

/**
 * _strstr - function that locates a substring in a string
 *
 * @haystack: first string input
 * @needle: second string input
 *
 * Return: 0 (success)
 */

char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *h = haystack;
		char *n = needle;

		while (*h == *n && *n != '\0')
		{
			h++;
			n++;
		}
		if (*n == '\0')
		{
			return (haystack);
		}
	}

	return ('\0');
}


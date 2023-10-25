#include "main.h"

/**
 * _strstr - function that locates a substring in a string
 *
 * @haystack: first string input
 * @needle: second string input
 *
 * Return: nothing
 */

char *_strstr(char *haystack, char *needle)
{

	char h = haystack;
	char n = needle;

	if (needle == '\0')
	{
		return (haystack);
	}

	while (haystack != '\0')
	{
		if (haystack == needle)
		{
			while (n != '\0' && h == n)
			{
				h++;
				n++;
			}
			if (n == '\0')
			{
				return (haystack);
			}
		}
		haystack++;
	}

	return (NULL);
}


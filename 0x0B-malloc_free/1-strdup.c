#include "main.h"

/**
 * _strdup - function that copy pointer of string
 *
 * @str: string input
 *
 * Return: pointer to m
*/

char *_strdup(char *str)
{
	int i = 0, size = 0;
	char *m;

	if (str == NULL)
		return (NULL);

	for (; str[size] != '\0'; size++)

	m = malloc(size * sizeof(*str) + 1);

	if (m == 0)
	{
		return (NULL);
	}
	else
	{
		for (; i < size; i++)
			m[1] = str[i];
	}
	return (m);
}

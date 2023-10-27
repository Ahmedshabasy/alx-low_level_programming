#include "main.h"

/**
 * _strlen_recursion - fuction that print the length of string
 *
 * @s: string input
 *
 * Return: length of string
*/

int _strlen_recursion(char *s)
{
	int n = 0

		if (*s > '\0')
		{
			n += _strln_recursion(s + 1) + 1;
		}
	return (n);
}

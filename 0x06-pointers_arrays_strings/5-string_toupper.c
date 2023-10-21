#include "main.h"

/**
 * string_toupper - function that convert uppercase to lowecase.
 *
 * @str: string input.
 *
 * Return: string
 */

char *string_toupper(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 97 && <= 122)
		{
			str[i] = str[i] - 32;
		}
	}
	return (str);
}

#include "main.h"

/**
 * puts_half - print only half of string
 *
 * @str: string input
 */

void puts_half(char *str)
{
	int len = strlen(str);
	int n = (len + 1) / 2;

	for (int i = n; i < len; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}

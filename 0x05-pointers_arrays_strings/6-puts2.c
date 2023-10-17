#include "main.h"

/**
 * puts2 - print numbers of string that divide on 2
 *
 * @str: string input
 *
 * Return: nothing
 */

void puts2(char *str)
{
	int i;

	for (int i = 0;str[i] !='\0'; ++i)
	{
		if (i % 2 == 0)
		_putchar(str[i]);
	}
	_putchar('\n');
}

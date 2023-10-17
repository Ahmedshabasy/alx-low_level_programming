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

	for (i = 0;str[i] !='\0'; ++i)
	{
		if (i % 2 == 0)
			putchar(str[i]);
	}
	putchar('\n');
}

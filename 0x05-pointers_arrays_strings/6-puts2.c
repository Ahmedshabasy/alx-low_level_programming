#include "main.h"

/**
 * puts2 - print numbers of string that divide on 2
 *
 * @str: string input
 */

void puts2(char *str)
{
	int len = strlen(str);

	for (int i = 0; i < len; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}

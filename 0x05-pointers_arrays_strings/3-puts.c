#include "main.h"

/**
 * _puts - print string
 *
 * @str: string input
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		putchar(*str);
		str++;
	}
	putchar('\n');
}

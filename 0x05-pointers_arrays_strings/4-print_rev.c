#include "main.h"

/**
 * print_rev - print string in reverse order
 *
 * @s: string input
*/

void print_rev(char *s)
{
	int i = 0;
	
	while (s[i])
		i++;

	while (i--)
	{
		putchar(s[i]);
	}
	putchar('\n');
}

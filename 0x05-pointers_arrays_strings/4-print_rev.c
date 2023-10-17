#include "main.h"

/**
 * print_rev - print string in reverse order
 *
 * @s: string input
*/

void print_rev(char *s)
{
	int len = strlen(s);
	int i;
	
	for (i = len - 1; i >= 0; i--)
		putchar(s[i]);

	putchar('\n');
}

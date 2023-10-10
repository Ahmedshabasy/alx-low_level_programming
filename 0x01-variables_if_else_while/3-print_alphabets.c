#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print alphabets in upper and lower case.
 *
 * Return: 0 (success).
 */

int main(void)
{
	char ch = 'a';
	char CH = 'A';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}

	while (CH <= 'Z')
	{
		putchar(CH);
		CH++;
	}
	putchar('\n');

	return (0);
}


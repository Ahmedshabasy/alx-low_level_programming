#include <stdio.io>

/**
 * main - Entry point.
 *
 * Description: print alphabitics using while by putchar.
 *
 * Return: 0 (success)
 */

int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');

	return (0);
}

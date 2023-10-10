#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print hexadecimal to base 16.
 *
 * Return: 0 (success).
 */

int main(void)
{
	int digit = 48;

	while (digit <= 102)
	{
		if (digit == 57)
			digit += 39;
		putchar(digit);
		digit++;
	}
	putchar('\n');

	return (0);
}

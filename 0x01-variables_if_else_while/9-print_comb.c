#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print 1,2,-9.
 *
 * Return: 0 (success).
*/

int main(void)
{
	int digit = 0;

	while (digit <= 9)
	{
		if (digit != 9)
		{
			putchar(',');
			putchar(' ');
		}
		digit++;
	}
	putchar('\n');

	return (0);
}

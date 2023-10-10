#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print single digits to base 10.
 *
 * Return: 0 (success).
 */

int main(void)
{
	int digit = 0;

	while (digit <= 9)
	{
		printf("%d", digit);
			digit++;
	}
	printf("\n");

	return (0);
}

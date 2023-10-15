#include <stdio.h>

/**
 * main- intialize of the two integers
 *
 * Return: 0 (success)
 */

int main(void)
{
	long n = 612852475143;
	long i = 2;

	while (i * i <= n)
	{
		if (n % i == 0)
		{
			n /= i;
		}
		else
		{
			i++;
		}
	}
	printf("%ld\n", n);
	return (0);
}


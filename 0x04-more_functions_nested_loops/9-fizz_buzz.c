#include <stdio.h>

/**
 * main - print 1 - 100 followed by new line
 * numers that multiply by 3 print fizz
 * numbers thet multiply by 5 print buzz
 * number can multibly by 3 and 5 print fizzbuzz
 *
 * Return: 0 (success)
 */

int main(void)
{
	int num;

	for (num = 1; num <= 100; num++)
	{
		if (num % 3 == 0 && !(num % 5 == 0))
			printf("Fizz");
		else if (num % 5 == 0 && !(num % 3 == 0))
			printf("Buzz");
		else if (num % 3 == 0 && num % 5 == 0)
			printf("FizzBuzz");
		else
			printf("%d", num);

		if (num != 100)
			printf(" ");
		else
			printf("\n");
	}
	return (0);
}

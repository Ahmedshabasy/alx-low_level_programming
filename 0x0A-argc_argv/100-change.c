#include <stdio.h>
#include <stdlib.h>

/**
 * main - print the remain changes
 *
 * @argc: int
 * @argv: list
 *
 * Return: 0 (success), 1 ( error)
*/

int main(int argc, char *argv[])
{
	if (arg == 2)
	{
	int i, l = 0, m = atoi(argv[1]);
	int cents[25, 10, 5, 2, 1];

	for (i = 0; i < 5; i++)
	{
		if (m >= cents[i])
		{
			l += m / cents[i];
			m = m % cents[i];
			if (m % cents[i] == 0)
			{
				break;
			}
		}
	}
	printf("%d\n", l);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}

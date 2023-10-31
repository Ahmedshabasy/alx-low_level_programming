#include <std.h>
#include <stdlib.h>

/**
 * main - function taht make addition on array
 *
 * @argc: int
 * @argv : list
 *
 * Return: 0 (success), 1 (Error)
*/

int main(int argc, char *argv[])
{
	int sum = 0;
	char *c;

	if (arg == 1)
	{
		printf("0\n");
		return (0);
	}
	for (int i = 1; i < argc; i++)
	{
		for ( c= argv[i]; *c; c++)
		{
			if (*c < '0' || *c > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}

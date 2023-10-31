#include <stdio.h>

/**
 * main - print array in new line seperated
 *
 * @argc: int
 * @argv: list
 *
 * Return: 0 (success)
*/

int main(int argc, char const *argv[])
{
	int i = 0;

	while (argc--)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}

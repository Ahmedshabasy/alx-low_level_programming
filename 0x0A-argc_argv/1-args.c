#include <stdio.h>

/**
 * main - print number of arguments
 *
 * @argc: int
 * @argv: list
 *
 * Return: 0 (success)
*/

int main(int argc, char *argv[])
{
	(void)*argv[];
	printf("%d\n", argc - 1);
	return (0);
}

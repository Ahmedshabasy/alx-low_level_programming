#include <stdio.h>

/**
 * _putchar - print characters
 *
 * @c: character input
 *
 * Return: 0 (success)
*/

int _putchar(char *c)
{
	return (write(1, &c, 1));
}

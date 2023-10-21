#include <unistd.h>

/**
 * _putchar - print chracters
 * @c: character that printed
 *
 * Return: on success 1.
 * in error -1 is returned
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}

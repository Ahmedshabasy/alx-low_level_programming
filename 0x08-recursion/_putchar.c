#include <unistd.h>

/**
 * _putchar - function that print characters
 *
 * @c: charaters input
 *
 * Return: on success 1, else -1*/

int _putchar(char c)
{
        return (write(1, &c, 1));
}

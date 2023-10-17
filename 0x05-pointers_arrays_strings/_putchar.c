#include <unistd.h>
#include "main.h"

/**
 * _putchar -  write the character c to stdout
 * @c: character to be print
 *
 * Return: 1 (success)
 * -1 (error). and error is set appropately
 */

int _putchar(char c)
{
        return (write(1, &c, 1));
}

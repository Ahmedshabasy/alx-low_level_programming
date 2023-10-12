#include "main.h"

/**
 * _islower - check if character is lower case.
 *
 * @c: check input of function.
 *
 * Return: returns  1 if c is a lowercase
 * otherwise return 0 (success).
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}

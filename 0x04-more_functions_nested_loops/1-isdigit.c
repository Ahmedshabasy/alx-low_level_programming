#include "main.h"

/**
 * _isdigit - check if input is digit.
 *
 * @c: function input.
 *
 * Return: 1 is digit, otherwise 0.
 */

int _isdigit(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}

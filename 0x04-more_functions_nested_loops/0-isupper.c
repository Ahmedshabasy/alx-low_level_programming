#include "main.h"

/**
 * _isupper - recognize if character is upper case
 *
 * @c: function input
 *
 * Return: 1 (success), otherwise 0
*/

int _isupper(int c)
{
	if (c >= 65 && c <= 95)
	{
		return (1);
	}
		return (0);
}

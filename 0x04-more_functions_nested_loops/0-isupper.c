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
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
		return (0);
}

#include "main.h"

/**
 *  _islower - Function that checks for lowercase character
 * @c : Check
 *  Return: 0
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}

#include "main.h"

/**
 * _isdigit -digits
 * @c: char to check
 * Return: 0 or 1
 *
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

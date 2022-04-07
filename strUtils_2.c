#include "main.h"
/**
 * _isdigit - check if c is an integer
 * @c: integer
 * Return: 0
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);

	else
		return (0);
}


#include "main.h"

/**
 * _isdigit - Check if parameter is a digit or character.
 *
 * @c: Parameter.
 * Return: 1 if it's a number, and otherwise 0.
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}


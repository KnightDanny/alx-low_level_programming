#include "main.h"

/**
 * _isdigit - Checks for a digit
 * @c: The character to be checked
 * Return: 1 if c is a digit, if not 0
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}

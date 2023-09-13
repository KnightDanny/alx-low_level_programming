#include "main.h"
/**
* print_sign - displays the sign of a number
* @n: Character to be checked
* Return: 0 if it's zero, if not 1
*/
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}

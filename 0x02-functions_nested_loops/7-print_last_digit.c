#include "main.h"
/**
* print_last_digit - Prints the last digit of a number
* @n: The number
* Return: the last digit of n
*/
int print_last_digit(int n)
{
	int last;

	if (n < 0)
		last = -1 * (n % 10);
	else
		last = n % 10;
	_putchar(last + '0');
	return (last);
}

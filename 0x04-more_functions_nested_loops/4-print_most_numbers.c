#include "main.h"
/**
* print_most_numbers - Prints numbers 0-9, except 2 and 4
* Return: Always
*/
void print_most_numbers(void)
{
	int i = '0';

	for (; i <= '9'; i++)
	{
		if (i != '2' && i != '4')
			_putchar(i);
	}
	_putchar('\n');
}

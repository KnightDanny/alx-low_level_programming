#include "main.h"
/**
* print_numbers - print numbers 0 - 9 prefixed with 0
* Return: void
*/
void print_numbers(void)
{
	int i = '0';

	for (; i <= '9'; i++)
		_putchar(i);
	_putchar('\n');
}

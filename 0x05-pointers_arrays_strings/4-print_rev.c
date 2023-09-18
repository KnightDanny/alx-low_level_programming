#include "main.h"
#include <string.h>
/**
* print_rev - reverses a string
* @s: the argument string for print_rev
* Return: void
*/
void print_rev(char *s)
{
	int length = strlen(s);

	while (length--)
	{
		_putchar(s[length]);
	}
	_putchar('\n');
}

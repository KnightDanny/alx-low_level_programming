#include "main.h"
/**
 * puts_half - Print half of string.
 * @str: Type char pointer
 * Return: void
 */
void puts_half(char *str)
{
	int length = 0, n, i;

	while (str[length] != '\0')
	{
		length++;
	}
	if (length % 2 == 0)
		n = length / 2;
	else
		n = (length + 1) / 2;
	for (i = n; i < length; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}

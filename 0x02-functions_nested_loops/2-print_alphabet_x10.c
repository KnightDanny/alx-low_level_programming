#include "main.h"

/**
* print_alphabet_x10 - prints the lowercase alphabet 10 times'
* Return: void
*/
void print_alphabet_x10(void)
{
	int i, j = 0;

	while (j < 10)
	{
		for (i = 'a'; i <= 'z'; i++)
			_putchar(i);
		_putchar('\n');
		j++;
	}

}

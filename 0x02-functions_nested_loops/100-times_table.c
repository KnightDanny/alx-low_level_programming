#include "main.h"
/**
 * print_times_table - Print n times table
 * @n: The number of times to print the table
 */
void print_times_table(int n)
{
	int prod = 0, row, col;

	if (n > 15 || n < 0)
		return;
	while (prod <= n)
	{
		for (row = 0; row <= n; row++)
		{
			col = prod * row;
			if (col > 99)
			{
				_putchar(col / 100 + '0');
				_putchar((col / 10 % 10) + '0');
				_putchar(col % 10 + '0');
			}
			else if (col > 9)
			{
				_putchar(' ');
				_putchar(col / 10 + '0');
				_putchar(col % 10 + '0');
			}
			else if (row != 0)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar(col + '0');
			}
			else
				_putchar(col + '0');

			if (row != n)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
		prod++;
	}
}

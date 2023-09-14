#include "main.h"
/**
* times_table - Prints 9x time table
* Return: void
*/
void times_table(void)
{
	int row, col, table;

	for (row = 0; row < 10; row++)
	{
		for (col = 0; col < 10; col++)
		{
			table = row * col;

			if (table > 9)
			{
				_putchar(table / 10 + '0');
				_putchar(table % 10 + '0');
			}
			else
			{
				if (col != 0)
					_putchar(' ');
				_putchar(table + '0');
			}

			if (col != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}

		_putchar('\n');
	}
}

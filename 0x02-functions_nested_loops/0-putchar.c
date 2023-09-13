#include "main.h"
/**
* main - Entry point
* Return: Always 0 (Success)
*/
int main(void)
{
	char text[8] = "_putchar";
	int i = 0;

	while (i < 8)
	{
		_putchar(text[i]);
		i++;
	}
	_putchar('\n');
	return (0);
}

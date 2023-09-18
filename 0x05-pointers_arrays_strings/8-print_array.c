#include "main.h"
#include <stdio.h>
/**
* print_array - prints n elements of an array of integers
* @a: an argument array
* @n: an argument integer
* Return: void
*/
void print_array(int *a, int n)
{
	int i = 0;

	for (; i < n; i++)
	{
		printf("%d", a[i]);
		if (i < n - 1)
			printf(", ");
	}
	putchar('\n');
}

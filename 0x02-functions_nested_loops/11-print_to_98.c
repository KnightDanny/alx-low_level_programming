#include <stdio.h>
/**
* print_to_98 - prints numbers from n-98
* @n: The starting point
*/

void print_to_98(int n)
{
	while (n != 98)
	{
		printf("%d, ", n);
		n = (n < 98) ? n + 1 : n - 1;
	}
	printf("%d\n", n);
}

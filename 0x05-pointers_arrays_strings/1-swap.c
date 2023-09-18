#include "main.h"
/**
*swap_int - swaps the values of two numbers
*@x: The first number
*@y: The second number
*Return: void
*/
void swap_int(int *x, int *y)
{
	int temp;

	temp = *x;
	*x = *y;
	*y = temp;
}


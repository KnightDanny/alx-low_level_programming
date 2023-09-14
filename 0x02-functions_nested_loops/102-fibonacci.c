#include <stdio.h>
/**
* main - print the first 50 fibonacci numbers
* Return: 0
*/
int main(void)
{
	long currentNumber = 0, nextNumber = 1, sum;
	int counter;

	for (counter = 0; counter < 50; counter++)
	{
		sum = currentNumber + nextNumber;
		currentNumber = nextNumber;
		nextNumber = sum;
		if (counter != 49)
			printf("%ld, ", sum);
		else
			printf("%ld\n", sum);
	}
	return (0);
}

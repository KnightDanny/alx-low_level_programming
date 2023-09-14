#include <stdio.h>

/**
 * main - Prints the sum of even Fibonacci numbers below 4 million
 *
 * Return: 0
 */
int main(void)
{
	int index;
	long int fibonacci[50], sum = 2;

	fibonacci[0] = 1;
	fibonacci[1] = 2;

	for (index = 2; index < 50; index++)
	{
		fibonacci[index] = fibonacci[index - 1] + fibonacci[index - 2];
		if ((fibonacci[index] % 2) == 0 && fibonacci[index] < 4000000)
			sum += fibonacci[index];
	}

	printf("%ld\n", sum);

	return (0);
}

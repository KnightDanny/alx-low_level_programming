#include "main.h"
int is_divisible(int num, int div);
/**
* is_prime_number - checks if a number is prime number
* @n: an argument
* Return: 1 if n is prime, otherwise 0
*/
int is_prime_number(int n)
{
	int div = 2;

	if (n <= 1)
		return (0);

	if (n <= 3)
		return (1);

	return (is_divisible(n, div));
}
/**
* is_divisible - check if num is divisible by div
* @num: first argument
* @div: second argument
* Return: 1 if num is divisible, otherwise 0
*/
int is_divisible(int num, int div)
{
	if (num % div == 0)
		return (0);

	if (div == num / 2)
		return (1);

	return (is_divisible(num, div + 1));
}

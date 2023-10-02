#include <stdio.h>
/**
* main - prints its name
* @argc: number of commandline arguments
* @argv: list of commandline arguments
* Return: Always 0
*/
int main(int argc, char **argv)
{
	printf("%s\n", argv[0]);
	(void)argc;
	return (0);
}

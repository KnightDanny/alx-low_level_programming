#include "main.h"
/**
* _strlen -  computes the length of a string
* @s: Input string
* Return: length of the string
*/
int _strlen(char *s)
{
	int length = 0;

	while (s[length] != '\0')
		length++;
	return (length);
}

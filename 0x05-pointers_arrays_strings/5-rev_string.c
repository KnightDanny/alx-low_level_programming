#include "main.h"
/**
* rev_string - reverses a string
* @s: an argument string
* Return: void
*/
void rev_string(char *s)
{
	int length = 0, i = 0;
	char temp;

	while (s[length] != '\0')
		length++;
	while (i < length--)
	{
		temp = s[i];
		s[i++] = s[length];
		s[length] = temp;
	}
}

#include "main.h"
#include <stdlib.h>
/**
* _strdup - returns a pointer to a newly allocated space in memory
* @str: Argument, an input pointer of the string to copy
* Return: A pointer to new string, NULL if the str is NULL
*/
char *_strdup(char *str)
{
	char *c;
	unsigned int i, j;

	if (str == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
		;
	c = malloc(i * sizeof(*c) + 1);
	if (c == NULL)
		return (NULL);
	for (j = 0; j < i; j++)
		c[j] = str[j];
	c[j] = '\0';
	return (c);
}

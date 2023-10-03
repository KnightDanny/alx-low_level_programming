#include "main.h"
#include <stdlib.h>
/**
* create_array - creates an array of chars
* @size: Argument, The size of the array
* @c: Argument, a character to initialize the array
* Return: A pointer to the array, NULL if it fails
*/
char *create_array(unsigned int size, char c)
{
	char *k;
	unsigned int i = 0;

	k = malloc(size * sizeof(char));
	if (k == NULL)
		return (NULL);
	if (size == 0)
		return (NULL);
	for (i = 0; i < size; i++)
		k[i] = c;
	return (k);
}

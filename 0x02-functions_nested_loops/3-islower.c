#include "main.h"
/**
* _islower - checks if a letter is lowercase
* @c: Character to check
* Return: 1 if lowercase, 0 if not
*/
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}

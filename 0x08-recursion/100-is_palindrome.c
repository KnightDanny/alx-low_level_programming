#include "main.h"
/**
*_strlen_recursion - gets the length of the string s
* @s: The argument
* Return: the length of string
*/
int _strlen_recursion(char *s)
{
	if (!*s)
	{
		return (0);
	}
	return (_strlen_recursion(s + 1) + 1);
}
/**
* assist_palindrome - reverses a string
* @s: The first argument
* @len: The second argument
* Return: A reverse string
*/
int assist_palindrome(char *s, int len)
{
	if (len <= 1)
		return (1);
	else if (*s == *(s + len - 1))
	{
		return (assist_palindrome(s + 1, len - 2));
	}
	else
		return (0);

}
/**
* is_palindrome - checks for a palindrome
* @s: The argument
* Return: 1 if is string is a palindrome, otherwise 0
*/
int is_palindrome(char *s)
{
	int len;

	len = _strlen_recursion(s);
	if (len <= 1)
		return (1);
	return (assist_palindrome(s, len));
}

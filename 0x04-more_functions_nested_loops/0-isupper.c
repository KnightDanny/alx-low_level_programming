/**
 * _isupper - Checks for uppercase alphabet
 * @c: The character
 *
 * Return: 1 if c is uppercase, if not 0
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}

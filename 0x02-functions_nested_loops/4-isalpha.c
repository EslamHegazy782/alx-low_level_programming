#include "main.h"
/**
 * _isalpha - prints 1 for aphabetical letters ans shows 0 for other
 *
 * @c: in ASCII code
 *
 * Return: 1  if c is a letter, lowercase or uppercase and
 *         0 for other.
 */
int _isalpha(int c);
{
	if ((c >= 65 && c <= 90) || (C >= 97 && c <= 122))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar ('\n');
}

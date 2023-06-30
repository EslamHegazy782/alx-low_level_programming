#include "main.h"
/**
 * print_sign - print the sign of each input number.
 *
 * @n: The input number as integar
 *
 * Return: 1 if positive , 0 if zero , -1 if minus
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
	_putchar('\n');
}

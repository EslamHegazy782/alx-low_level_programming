#include "main.h"
/**
 * print_last_digit - prints the last digit of the input number
 *
 * @i: is an integar
 *
 * Return: last digit
 */
int print_last_digit(int i)
{
	int l;

	l = i % 10;
	if (l < 0)
	{
		_putchar(-l + 48);
		return (-l);
	}
	else
	{
		_putchar(l + 48);
		return (l);
	}
}

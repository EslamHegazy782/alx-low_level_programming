#include "main.h"
/**
 * factorial - function returning a factorial of a given no.
 * @n: the number which needs a factorial
 * Return:  the function should return -1 to indicate an error
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}

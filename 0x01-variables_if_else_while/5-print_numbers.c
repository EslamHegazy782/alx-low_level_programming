#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: program print single digit no.
 *
 * Return: Always 0 (sucess)
*/
int main(void)
{
	int digit = 0;

	while (digit <= 9)
	{
		printf("%i", digit);
			digit++;
	}
	printf("\n");
	return (0);
}

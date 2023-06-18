#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: A program for printing lower and uppercase letters
 *
 * Return: Always 0 (sucess)
*/
int main(void)
{
	char ch = 'a';
	char CH = 'A';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}

	while (CH <= 'Z')
	{
		putchar(CH);
		CH++;
	}
	putchar('\n');
	return (0);
}

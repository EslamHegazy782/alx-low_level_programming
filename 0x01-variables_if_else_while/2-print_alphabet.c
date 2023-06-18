#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: A program for printing all letters in lowercase
 *
 * Return: Always 0 (sucess)
*/
int main(void)
{
	char ch = 'a';
	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}


#include<stdio.h>
/**
 * main - Entry point
 *
 * Description: printing reverse letters
 *
 * Return: Always 0 (sucess)
*/
int main(void)
{
	char ch = 'z';

	while (ch >= 'a')
	{
		putchar(ch);
		ch--;
	}
	putchar('\n');
	return (0);
}

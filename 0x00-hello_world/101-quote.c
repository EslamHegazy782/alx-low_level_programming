#include <unistd.h>
/**
 * main - entry point
 * Description: program used for printing
 * Return: 1 (error)
*/
int main(void)
{
	char quo[]=("and that piece of art is useful\" - Dora Korpar, 2015-10-19 \n");
	write(1, quo, 62);
	return (1);
}

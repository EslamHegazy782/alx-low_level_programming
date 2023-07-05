#include "main.h"
#include <unistd.h>
/**
 * _putchar - writes the character c to stdadard output
 * @c: The characterto be printed
 * Return: 1 for success
 * On error, -1 is returned and errno is set appropriately
 */
int _putchar(char c)
{
	return(write(1, &c, 1));
}

#include <stdio.h>
#include "main.h"

/**
 *_putchar - writes the character c to stdout 
 *@c: the character to be printed
 *Return: 1 if success & -1 for error
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}

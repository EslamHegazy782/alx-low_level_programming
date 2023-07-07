#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 *check_num - check - string there are digit
 *@str: array str
 *Return: always 0 (success)
*/
int check_num(char *str)
{
	/*Declaring variables*/
	unsigned int count;

	count = 0;
	while (count < strlen(str)) /*count string*/
	{
		if (!isdigit(str[count])) /*check if string there are digit*/
		{
			return (0);
		}
		count++;
	}
	return (1);
}
/**
 *main - print the name of the program
 *@argc: count arguments
 *@argv: Arguments
 *Return: Always 0 (success)
*/
int main(int argc, char *argv[])
{
	/*declaring variables*/
	int count;
	int str_to_int;
	int sum = 0;

	count = 1;
	while (count < argc) /*goes through the whole array*/
	{
		if (check_num(argv[count]))
		{
			str_to_int = atoi(argv[count]); /*atoi converting string into int*/
			sum += str_to_int;
		}

		/*condition if one of the numbercontains non digit symbols*/
		else
		{
			printf("Error\n");
			return (1);
		}
		count++;
	}
	printf("%d\n", sum); /*printing sum*/
	return (0);
}


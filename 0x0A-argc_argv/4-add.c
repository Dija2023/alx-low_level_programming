#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
 * check_num - check -the  strings there are digit
 * @str: array string
 *
 * Return: Always 0 (Success)
 */
int check_num(char *str)
{
	/*Declaring the variables*/
	unsigned int count;

	count = 0;
	while (count < strlen(str)) /*count the str*/

	{
		if (!isdigit(str[count])) /*Check if str there are digit*/
		{
			return (0);
		}

		count++;
	}
	return (1);
}

/**
 * main - Print the program's name
 * @argc: counts the  arguments
 * @argv: Arguments Array
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])

{

	/*declaring the variables*/
	int count;
	int str_to_int;
	int sum = 0;

	count = 1;
	while (count < argc) /*goes through  whole array*/
	{
		if (check_num(argv[count]))

		{
			str_to_int = atoi(argv[count]); /*ATOI --> it converts string to int*/
			sum += str_to_int;
		}

		/*in condition if one of the numbers contains symbols that aren't digits*/
		else
		{
			printf("Error\n");
			return (1);
		}

		count++;
	}

	printf("%d\n", sum); /*print sum*/

	return (0);
}

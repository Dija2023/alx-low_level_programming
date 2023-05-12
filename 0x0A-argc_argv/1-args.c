#include <stdio.h>
#include "main.h"

/**
 * main -The number of arguments is printed
 * @argc: how many arguments
 * @argv: arguments' array
 *
 * Return: always 0 (Success)
 */

int main(int argc, char *argv[])
{
(void) argv; /*Ignore argv*/
	printf("%d\n", argc - 1);

	return (0);
}

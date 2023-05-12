#include <stdio.h>
#include "main.h"

/**
 * main - Prints all received  arguments
 * @argc: Counts the  arguments
 * @argv: the array of the arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}

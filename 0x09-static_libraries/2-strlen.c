#include "main.h"

/**
 * _strlen - calculates length of  string
 * @s: string
 * Return: Length
 */
int _strlen(char *s)
{
	int longi = 0;

	while (*s != '\0')
	{
		longi++;
		s++;
	}

	return (longi);
}

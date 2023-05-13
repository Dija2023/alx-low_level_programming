#include "main.h"
/**
 * _strncpy - Copy string
 * @dest: Input Value
 * @src: Input Value
 * @n: Input Value
 *
 * Return: Dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int j;

	j = 0;
	while (j < n && src[j] != '\0')
	{
		dest[j] = src[j];
		j++;
	}
	while (j < n)
	{
		dest[j] = '\0';
		j++;
	}

	return (dest);
}

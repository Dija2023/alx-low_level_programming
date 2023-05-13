#include "main.h"
/**
 * _memset - fill a memory  block with some specific value
 * @s: start address of memory to be filled
 * @b:  Desired value
 * @n: Bytes number  to be changed
 *
 * Return: Changed array with new value for new bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}

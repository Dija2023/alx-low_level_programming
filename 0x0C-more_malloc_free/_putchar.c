#include "main.h"
#include <unistd.h>

/**
 * _putchar - Write The char c to stdout
 * @c: the char to be  printed
 *
 * Return: On success 1.
 * -1 is returned on error, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

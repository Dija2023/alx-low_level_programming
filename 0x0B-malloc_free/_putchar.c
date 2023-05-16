#include "main.h"
#include <unistd.h>
/**
 * _putchar - writes char c to stdout
 * @c: Char to print
 *
 * Return: On success 1.
 *, -1 is returned on error, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

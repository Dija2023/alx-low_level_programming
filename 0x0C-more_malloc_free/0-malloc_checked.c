#include <stdlib.h>
#include "main.h"

/**
 * *malloc_checked - Allocating memory by sing malloc
 * @b: how many bytes to allocate
 *
 * Return:  Pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}

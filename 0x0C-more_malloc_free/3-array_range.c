#include "main.h"
#include <stdlib.h>

/**
 * array_range - Create an array of integers.
 * @min: Minimum of value.
 * @max: Maximum of value.
 *
 * Return: pointer to the newly created array.
 * If man > mix, return NULL.
 * If malloc fails, return NULL.
 */
int *array_range(int min, int max)
{
	int *ar;
	int i;

	if (min > max)
		return (NULL);

	ar = malloc(sizeof(*ar) * ((max - min) + 1));

	if (ar == NULL)
		return (NULL);

	for (i = 0; min <= max; i++, min++)
		ar[i] = min;

	return (ar);
}

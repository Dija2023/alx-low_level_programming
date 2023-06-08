#include "main.h"

/**
 * get_bit - Returning value of  bit at an index in  decimal num.
 * @n: Num to search
 * @index: Index of bit
 *
 * Return: Value of bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit_val;

	if (index > 63)
		return (-1);

	bit_val = (n >> index) & 1;

	return (bit_val);
}

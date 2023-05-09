#include "main.h"

/**
 * set_bit - returns a bit at a given index to 1
 * @n: pointer parameter
 *
 * @index: index of the bit to set parameter
 *
 * Return: 1 for true, -1 for failure
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}

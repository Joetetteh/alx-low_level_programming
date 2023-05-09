#include "main.h"

/**
 * clear_bit - returns the value of a given bit to 0
 *
 * @n: pointer parameter
 *
 * @index: index of the bit parameter
 *
 * Return: 1 for true, -1 for failure
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}

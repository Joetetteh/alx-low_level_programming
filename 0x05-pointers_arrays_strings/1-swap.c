#include "main.h"

/**
 * swap_int - a function to swap two numbers
 *
 * @a: parameter
 * @b: parameter
 *
 * Return: 0
 *
 */

void swap_int(int *a, int *b)
{
	int x;

	x = *a;
	*a = *b;
	*b = x;
}

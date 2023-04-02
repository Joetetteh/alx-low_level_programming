#include "main.h"

/**
 * reverse_array - a function that reverses the content of integer arrays
 *
 * @a: parameter
 * @n: parameter
 *
 * Return: value
 *
 */

void reverse_array(int *a, int n)
{
	int i;
	int x;

	for (i = 0; i < n / 2; i++)
	{
		x = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = x;
	}
}

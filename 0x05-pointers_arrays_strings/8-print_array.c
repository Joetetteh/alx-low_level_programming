#include "main.h"
#include <stdio.h>

/**
 * print_array - a function that prints n elements of an array
 *
 * @a: para
 *
 * @n: para
 *
 * Return: value
 *
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i != n - 1)
		{
			printf("%d,", a[i]);
		        printf(" ");
		}
		else
		{
			printf("%d,", a[i]);
			printf(" ");
		}
	}
	printf("\n");
}

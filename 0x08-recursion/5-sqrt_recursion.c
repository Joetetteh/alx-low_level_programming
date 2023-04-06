#include "main.h"
#include <stdio.h>

int sroot(int n, int i);

/**
 * _sqrt_recursion - a function to return natural square root of numbers
 *
 * @n: parameter
 * Return: value
 */


int _sqrt_recursion(int n)
{
	return (sroot(n, 1));
}
/**
 * sroot - a function to return natural square root of numbers
 *
 * @n: parameter
 * @i: parameter
 *
 * Return: value
 */
int sroot(int n, int i)
{
	int root;

	root = i * i;

	if (root > n)
		return (-1);
	if (root == n)
		return (i);
	return (sroot(n, i + 1));
}

#include "main.h"

/**
 * factorial - a funtion to return a factorial of a number
 *
 * @n: parameter
 * Return: value
 */

int factorial(int n)
{
	int result;

	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		result = n * factorial(n - 1);
		return (result);
}
}

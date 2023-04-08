#include "main.h"

/**
 * is_prime_number - a function to return a prime or even number
 *
 * @n: parameter
 *
 * Return: value
 */

int is_prime_number(int n)
{
	int _prime();
	return (_prime(n, 1));
}


/**
 * _prime - a function to return a prime or even number
 *
 * @n: parameter
 * @i: parameter
 * Return: value
 */

int _prime(int n, int i)
{
if (n <= 1)
{
return (0);
}
if (n % i == 0 && i > 1)
{
return (0);
}
if ((n / i) < i)
{
return (1);
}
return (_prime(n, i + 1));
}

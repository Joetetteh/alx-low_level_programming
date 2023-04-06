#include "main.h"
/**
 * _print_rev_recursion - a function to print a string in reverse
 *
 * @s: parameter
 *
 * Return: value
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	s++;
	_print_rev_recursion(s);
	s--;
	_putchar(*s);
}

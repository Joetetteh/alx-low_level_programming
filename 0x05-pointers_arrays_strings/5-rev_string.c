#include "main.h"
#include <stdio.h>

/**
 * rev_string - a function to reverse a string
 *
 * @s: parameter
 *
 * Return: value
 *
 */

void rev_string(char *s)
{
	int i;
	int count;

	count = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
	for (i = 0; s[i] != '\0'; i++)
	{
		count++;
	}
	for (i = count; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}

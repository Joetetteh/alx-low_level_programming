#include "main.h"

/**
 * puts2 - A function to print any other characters of a string
 *
 * @str: parameter
 *
 * Return: value
 *
 */

void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}

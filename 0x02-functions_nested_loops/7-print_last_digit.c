#include "main.h"

/**
 * print_last_digit - function to return the last digit of a number
 *
 * @num: function parameter
 *
 * Return: Always (Success)
 */

int print_last_digit(int num)
{
int last;
last = num % 10;
if (num <= 0)
last = -last;
_putchar(last + '0');
return (last);
}

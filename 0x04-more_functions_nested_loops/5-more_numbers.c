#include "main.h"

/**
 * more_numbers - function for more numbers
 *
 * Description: parameter
 *
 * Return: Always (success)
 *
 */

void more_numbers(void)
{
int o;
int i;

for (o = 1; o <= 10; o++)
{
for (i = 0; i <= 14; i++)
{
if (i >= 10)
{
_putchar('1');
_putchar(i % 10 + '0');
}
}
_putchar('\n');
}
}

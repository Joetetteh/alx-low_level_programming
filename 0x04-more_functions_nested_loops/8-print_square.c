#include "main.h"

/**
 * print_square - a function to print square
 *
 * @size: parameter
 *
 * Return: Always (Success)
 *
 */

void print_square(int size)
{
int i;
int j;

for (i = 1; i <= size; i++)
{
for (j = 0; j <= size; j++)
{
if (j >= size)
_putchar('\n');
else if (j < size)
{
_putchar('#');
}
}
_putchar('\n');
}
}

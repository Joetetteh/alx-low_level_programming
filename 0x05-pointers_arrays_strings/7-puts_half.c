#include "main.h"

/**
 * puts_half - a function to print half of s string
 *
 * @str: parameter
 *
 * Return: value
 *
 */

void puts_half(char *str)
{
int i;
int leng;

leng = 0;

for (i = 0; str[i] != '\0'; i++)
{
leng++;
}
if (leng % 2 == 0)
{
for (i = (leng / 2); str[i] != '\0'; i++)
{
_putchar(str[i]);
}
}
else if (leng % 2 != 0)
{
for (i = (leng - 1) / 2; str[i] != '\0'; i++)
{
_putchar(str[i]);
}
}
_putchar('\n');
}

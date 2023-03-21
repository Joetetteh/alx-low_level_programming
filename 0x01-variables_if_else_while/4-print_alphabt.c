#include <stdio.h>
#include <stdlib.h>

/**
 * main - print_alphabt.c
 *
 * Return: Always (Success)
 */

int main(void)
{
char C;
for (C = 'a'; C <= 'z'; C++)
{
putchar(C);
if (C == 'q' || C == 'e')
continue;
}
return (0);
}

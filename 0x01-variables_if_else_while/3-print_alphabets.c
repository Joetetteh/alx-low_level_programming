#include <stdio.h>
#include <stdlib.h>

/**
 * main - print_alphabets.c
 *
 * Return: Always (Success)
 */

int main(void)
{
char Alph;
char Blph;
for (Alph = 'a'; Alph <= 'z'; Alph++)
putchar(Alph);
for (Blph = 'A'; Blph <= 'Z'; Blph++)
putchar(Blph);
putchar('\n');
return (0);
}

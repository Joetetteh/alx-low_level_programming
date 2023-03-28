#include "main.h"
#include <stdio.h>

/**
 * fizz_buzz - function to print fizzbuzz
 *
 * @i: parameter
 *
 * Return: Always (success)
 *
 */

int main(void)
{
int i;
for (i = 1; i <= 100; i++)
{
if (i % 3 == 0 && i % 5 == 0)
{
printf("FizzBuzz");
}
else if (i % 3 == 0)
{
printf("Fizz");
}
else if (i % 5 == 0)
{
printf("Buzz");
}
else
{
printf("%d", i);
}
if (i != 100)
{
printf(" ");
}
}
printf("\n");
return (0);
}

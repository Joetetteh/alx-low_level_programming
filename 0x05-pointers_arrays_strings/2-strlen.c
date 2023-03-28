#include "main.h"

/**
 * _strlen - length of string
 *
 * @s: parameter
 *
 * Return: value
 *
 */

int _strlen(char *s)
{
int i;
int count;

count = 0;

for (i = 0; s[i] != '\0'; i++)
count++;
return (count);
}

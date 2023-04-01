#include "main.h"

/**
 * _strncat - string concatenation
 *
 * @n: parameter
 *
 * @dest: parameter
 *
 * @src: parameter
 *
 * Return: value
 *
 */

char *_strncat(char *dest, char *src, int n)
{
int destination;
int source;
int i;

destination = 0;
source = 0;

for (i = 0; src[i] != '\0'; i++)
source++;
for (i = 0; dest[i] != '\0'; i++)
destination++;
for (i = 0; i < n; i++)
dest[destination + i] = src[i];
return (dest);
}

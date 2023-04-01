#include "main.h"

/**
 * _strcat - a function to concatenate two strings
 *
 * @dest: parameter
 *
 * @src: parameter
 *
 * Return: value
 *
 */

char *_strcat(char *dest, char *src)
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
for (i = 0; i <= source; i++)
	dest[destination + i] = src[i];
return (dest);
}

#include "main.h"
#include <stddef.h>
#include <stdio.h>

/**
 * _strcpy - a function to copy a string pointed by src
 *
 * @dest: parameter
 *
 * @src: parameter
 *
 * Return: value
 *
 */

char *_strcpy(char *dest, char *src)
{
int i;

if (dest == NULL)
return (NULL);
else
for (i = 0; src[i] != '\0'; i++)
dest[i] = src[i];
return (dest);
}

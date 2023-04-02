#include "main.h"

/**
 * _strncpy - fnction to copy a string
 *
 * @dest: parameter
 *
 * @src: parameter
 *
 * @n: parameter
 *
 * Return: value
 *
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}

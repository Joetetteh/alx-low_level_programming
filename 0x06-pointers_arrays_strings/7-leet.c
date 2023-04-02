#include "main.h"

/**
 * leet - leet function
 * @str: parameter
 * Return: value
 */

char *leet(char *str)
{
	int i;
	int x;

	char *a = "aAeEoOtTlL";
	char *b = "4433007711";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (x = 0; a[x] != '\0'; x++)
		{
			if (str[i] == a[x])
				str[i] = b[x];
		}
	}
	return (str);
}

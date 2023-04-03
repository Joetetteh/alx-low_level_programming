#include "main.h"

/**
 * rot13 - a function that encodes rot13
 *
 * @str: para
 *
 * Return: value
 *
 */

char *rot13(char *str)
{
	int i;
	int j;

	i = 0;
	j = 0;
	

	char data[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	while (str[i])
	{
		for (j = 0; j < 52; j++)
		{
			if (str[i] == data[j])
			{
				str[i] = rot[j];
				break;
			}
		}
	}
	i++;
	return (str);
}

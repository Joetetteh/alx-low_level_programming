#include "main.h"

/**
 * string_toupper - a function to change a lower letters to upper
 *
 * @str: parameter
 *
 * Return: value
 *
 */

char *string_toupper(char *str)
{
int i;

for (i = 0; str[i] != '\0'; i++)
{
if (str[i] >= 'a' && str[i] <= 'z')
str[i] = str[i] - 32;
i++;
}
return (str);
}

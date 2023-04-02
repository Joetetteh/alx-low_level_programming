#include "main.h"

/**
 * _strcmp - string comparison
 *
 * @s1: parameter
 * @s2: para
 *
 * Return: value
 *
 */

int _strcmp(char *s1, char *s2)
{
int i;

for (i = 0; s1[i] != '\0' || s2[i] != '\0'; i++)
{
if (s1[i] != s2[i])
{
if (s1[i] < s2[i])
{
return (s1[i] - s2[i]);
}
else if (s1[i] > s2[i])
{
return (s1[i] - s2[i]);
}
else
{
return (0);
}
}
}
return (0);
}

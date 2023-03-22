#include "main.h"

/**
 * _isalpha - function to check Eng alphabets
 *
 * @c: function to to display lowercas
 *
 * Return: Always (Success)
 */

int _isalpha(int c)
{
if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
{
return (1);
}
else
{
return (0);
}
}

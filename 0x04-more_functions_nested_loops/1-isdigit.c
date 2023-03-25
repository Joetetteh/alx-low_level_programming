#include "main.h"

/**
 *  _isdigit - a function to check for digits
 *
 *  @c: parameter
 *
 *  Return: Always (Success)
 */

int _isdigit(int c)
{
if (c >= 48 && c <= 57)
{
return (1);
}
else
{
return (0);
}
}

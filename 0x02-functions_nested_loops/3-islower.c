#include "main.h"

/**
 * _islower - function to check lowercase letters
 *
 * @c: islower parameter
 *
 * Return: Always (Ssuccess)
 */

int _islower(int c)
{
if (c >= 97 && c <= 122)
{
return (1);
}
else
{
return (0);
}
}

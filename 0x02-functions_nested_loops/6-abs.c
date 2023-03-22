#include "main.h"

/**
 * _abs - absolute value of a number
 *
 * @ab: function parameter
 *
 * Return: Always (Success)
 */

int _abs(int ab)
{
if (ab < 0)
ab = -(ab);
else if (ab >= 0)
ab = ab;
return (ab);
}

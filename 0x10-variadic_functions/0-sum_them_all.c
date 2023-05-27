#include "variadic_functions.h"
#include <stdarg.h>


/**
* sum_them_all - function Returns the sum of all its paramters.
* @n: paramters passed to the function.
* @...: number of paramters to calculate the sum of.
* Return: If n == 0 - 0.
* Otherwise - the sum of all parameters.
*/
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i, result = 0;


	va_start(ap, n);


	for (i = 0; i < n; i++)
		result += va_arg(ap, int);


	va_end(ap);


	return (result);
}

#include "3-calc.h"


int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);


/**
* op_add -  a funcion to return addition of two num.
* @a: parameter
* @b: parameter
*
* Return: integer
*/

int op_add(int a, int b)
{
	return (a + b);
}

/**
* op_sub - a function to return difference of two numbers.
* @a: first number para
* @b: second number para
*
* Return: something
*/

int op_sub(int a, int b)
{
	return (a - b);
}

/**
* op_mul - a function to return product of two numbers.
* @a: first number para
* @b: second number para
*
* Return: something
*/

int op_mul(int a, int b)
{
	return (a * b);
}

/**
* op_div - a function to return the quotient of of two numbers.
* @a: first number para
* @b: second number para
*
* Return: quotient
*/

int op_div(int a, int b)
{
	return (a / b);
}

/**
* op_mod - a function to return the remainder of two numbers.
* @a: first number para
* @b: second number para
*
* Return: The remainder of the division of a by b.
*/

int op_mod(int a, int b)
{
	return (a % b);
}

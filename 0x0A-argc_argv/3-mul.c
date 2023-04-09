#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - a program to return the product of two numbers
 *
 * @argc: argument
 * @argv: argument
 *
 * Return: value
 */

int main(int argc, char *argv[])
{
	int num1 = 0;
	int num2 = 0;

	if (argc == 3)
	{
		num1 = atoi(argv[1]);
		num2 = atoi(argv[2]);
		printf("%d\n", num1 * num2);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}

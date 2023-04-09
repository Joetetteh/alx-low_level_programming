#include "main.h"
#include <stdio.h>

/**
 * main - number of arguments passed to main
 * @argc: argument
 * @argv: argument
 *
 * Return: zero
 */

int main(int argc, char *argv[])
{
	(void) argv;

	printf("%d\n", argc - 1);
	return (0);
}

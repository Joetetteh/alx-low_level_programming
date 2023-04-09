#include "main.h"
#include <stdio.h>

/**
 * main - a programme to print all arguments its receive
 * @argc: argument
 * @argv: argument
 *
 * Return: zero
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}

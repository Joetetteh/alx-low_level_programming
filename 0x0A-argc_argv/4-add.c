#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


/**
 * main - a program that returns sum of 2 positive numbers
 *
 * @argc: argument
 * @argv: argument
 *
 * Return: value
 */

int main(int argc, char *argv[])
{
	int i;
	char *c;
	unsigned int x;
	unsigned int sum = 0;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			c = argv[i];
			for (x = 0; x < strlen(c); x++)
			{
				if (c[x] < 48 || c[x] > 57)
				{
					printf("Error\n");
					return (1);
				}
			}
			sum += atoi(c);
			c++;
		}
		printf("%d\n", sum);
	}
	else
	{
		printf("0\n");
	}
	return (0);
}

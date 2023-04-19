#include <stdio.h>
#include <stdlib.h>


/**
* main - prints opcodes
* @argc: parameter
* @argv: parmeter
*
* Return: something
*/
int main(int argc, char *argv[])
{
	int integer, i;
	char *arr;


	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	integer = atoi(argv[1]);


	if (integer < 0)
	{
		printf("Error\n");
		exit(2);
	}


	arr = (char *)main;


	for (i = 0; i < integer; i++)
	{
		if (i == integer - 1)
		{
			printf("%02hhx\n", arr[i]);
			break;
		}
		printf("%02hhx ", arr[i]);
	}
	return (0);
}

#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - Write a function that returns a pointer to grid
 *
 * @width: parameter
 * @height: parameter
 *
 * Return: pointer to 2 dimensional array
 */
int **alloc_grid(int width, int height)
{
	int **gridd;
	int x, y;

	if (width <= 0 || height <= 0)
		return (NULL);

	gridd = malloc(sizeof(int *) * height);

	if (gridd == NULL)
		return (NULL);

	for (x = 0; x < height; x++)
	{
		gridd[x] = malloc(sizeof(int) * width);

		if (gridd[x] == NULL)
		{
			for (; x >= 0; x--)
				free(gridd[x]);

			free(gridd);
			return (NULL);
		}
	}

	for (x = 0; x < height; x++)
	{
		for (y = 0; y < width; y++)
			gridd[x][y] = 0;
	}

	return (gridd);
}

#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - Creates a 2 dimensional array of integers
 * @width: Argument, the number of columns
 * @height: Argument, the number of rows
 * Return: The pointer to the array, NULL if memory allocation fails
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int *row;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);
	grid = malloc((sizeof(int *) * height) + (sizeof(int) * width * height));
	if (grid)
	{
		row = (int *)(grid + height);
		for (i = 0; i < height; i++)
		{
			*(grid + i) = (int *)(row + i * width);
			for (j = 0; j < width; j++)
				*(*(grid + i) + j) = 0;
		}
		return (grid);
	}
	else
		return (NULL);
}

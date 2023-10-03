#include "main.h"
#include <stdlib.h>
/**
 * free_grid - frees a 2 dimensional array of integers
 * @grid: Argument, the array of integers
 * @height: Argument, the number of rows in the array
 * Return: void
 */
void free_grid(int **grid, int height __attribute__((unused)))
{
	free(grid);
}

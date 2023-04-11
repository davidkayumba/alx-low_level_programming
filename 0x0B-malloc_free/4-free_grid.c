#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - free 2dim array
 * @grid: rows of matrix
 * @height: columns of string
 * Return: a point to 2dimensional array of intergers or Null
 */

void free_grid(int **grid, int height)
{
	int i;
	int *p;

	for (i = 0; i < height; i++)
	{
		p = grid[i];
		free(p);
		}
	free(grid);
}

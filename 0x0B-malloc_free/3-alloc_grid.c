#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - nested loop to make grid
 * @width: rows of matrix
 * @height: column of string
 * Return: A pointer to 2 dimensional array of intergers or Null
 */
int **alloc_grid(int width, int height)
{
	int **matrix;
	int i;
	int j;
	int k;
	int *l;

	if (width  <= 0 || height <= 0)
		return (NULL);
	matrix = (int **)malloc(height * sizeof(int *));
	if (matrix == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		*(matrix + i) = (int *)malloc(width * sizeof(int));
		if (*(matrix + i) == NULL)
		{
			for (i = 0; i < height; i++)
			{
				l = matrix[i];
				free(l);
			}
			free(matrix);
			return (NULL);
		}
	}
	for (j = 0; j < height; j++)
	{
		for (k = 0; k < width; k++)
		{
			matrix[j][k] = 0;
		}
	}
	return (matrix);
}

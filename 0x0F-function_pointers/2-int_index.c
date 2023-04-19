#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: array containing the enteger
 * @size: Is the number of elements
 * @cmp: is a pointer a function
 *
 * Return: 0 (success)
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (array == NULL ||size <= 0 || cmp == NULL)
		return (-1);
	
	for (; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return(-1);
}

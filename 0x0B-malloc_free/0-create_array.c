#include "main.h"

/**
 * create_array - create array of size and assign char c
 * @size: size of array
 * @c: char to assign
 * Description: create array of size size assign char c
 * return: pointer to the array and Null if it fail
 */
char *create_array(unsigned int size, char c)
{
	if (size == 0)
		return (NULL);
	if (size != 0)
	{
		arry = (char *)malloc(size * sizeof(char));
		if (array != NULL)
		{
			for (i = 0; i < size; i++)
				arry[i] = c;
		}
	}
	return (array);
}

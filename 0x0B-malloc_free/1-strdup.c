#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *_strdup - duplicate to new memory
 *@str: string we need to duplicate
 *Return: 0
 */
char *_strdup(char *str)
{
	char *strnew = NULL;
	unsigned int i;
	int m;

	if (str == NULL)
		return (NULL);
	for (m = 0; str[m] != '\0'; m++)
		;
	strnew = (char *)malloc(m + 1 * sizeof(char));
	if (strnew !=NULL)
	{
		for (i = 0; str[i] != '\0'; i++)
			strnew[i] = str[i];
	} else
	{
		return (NULL);
	}
	strnew[i] = '\0';
	return (strnew);
}

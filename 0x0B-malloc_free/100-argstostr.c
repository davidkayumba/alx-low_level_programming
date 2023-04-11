#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr - concatenate all the arguments of your program
 * @ac: number of argument
 * @av: arguments
 * Return: 0
 */
char *argstostr(int ac, char **av)
{
	int i;
	int l;
	char *p = NULL;
	int j;
	int ext;

	j = 0;
	ext = 0;
	if (ac == 0 || av == NULL)
		return (NULL);
	return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (l = 0; av[i][l] != '\0'; l++)
		{
			ext++;
		}
	}

	p = (char *)malloc(ext + ac + 1 * sizeof(char));
	if (p == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (l = 0; av[i][l] != '\0'; l++)
		{
			p[j] = av[i][l];
			j++;
		}
		p[j] = '\n';
		j++;
	}
	p[j] = '\0';
	return (p);
}

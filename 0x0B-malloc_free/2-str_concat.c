#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - get ends of strings and add to gether for size
 *@s1: string 1
 *@s2: string 2
 * Return: pointer should point to a newly allocated space in memory or NULL
 */
char *str_concat(char *s1, char *s2)
{
	char *strnew = NULL;
	unsigned int i;
	int a1;
	int a2;
	int count;

	count = 0;
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (a1 = 0; s1[a1] != '\0'; a1++)
		;
	for (a2 = 0; s2[a2] != '\0'; a2++)
		;
	strnew = (char *)malloc((a1 + a2 + 1) * sizeof(char));
	if (strnew == NULL)
	{
		return (NULL);
	}
	for (i = 0; s1[i] != '\0'; i++)
		strnew[i] = s1[i];
	for (; s2[count] != '\0'; i++)
	{
		strnew[i] = s2[count];
		count++;
	}
	return (strnew);
}


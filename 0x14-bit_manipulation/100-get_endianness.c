#include "main.h"

/**
 * get_endianness - print function that checks the endianness
 *
 * Return: 0
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *) &i;


	return (*c);
}

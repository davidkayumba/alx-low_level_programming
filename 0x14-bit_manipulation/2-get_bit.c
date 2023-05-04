#include "main.h"

/**
 * get_bit - return the values of a bit at given index
 * @n: unsigned log int
 * @index: index of the bit
 *
 * Return: the value of the bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int nbit;

	if (index > 63)
		return (-1);
	nbit = (n >> index) & 1;

	return (nbit);
}

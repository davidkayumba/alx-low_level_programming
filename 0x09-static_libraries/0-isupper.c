#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
 * _isupper - function to check the uppercase latter
 * @c: the input to be checked
 *
 * Return: 1/0 deppending on upper or lower case
 */
int _isupper(int c)
{
	return (c >= 'A' && c <= 'Z');
}

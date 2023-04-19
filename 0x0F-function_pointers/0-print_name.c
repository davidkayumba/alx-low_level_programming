#include "function_pointers.h"

/**
 * print_name - function that print a name
 * @name: name to print
 * @f: pointer to function
 *
 * Retun: Always 0 (succuss)
 */
void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
		return;
	f(name);
}

#include "main.h"

/**
*print_line - print line
*@n: The character to print
*Return 0
*/
void print_line(int n)
{
	int line;

	if (n > 0)
	{
		for (line = 0; line < n; line++)
		_putchar('_');
	}
	_putchar('\n');
}


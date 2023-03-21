#include <unistd.h>

/**
 * _putchar - writes character c stdout
 * @c: The character to print
 * Return on Success 1.
 * on Error, -1 is returned, and  errno is set appropliately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}	

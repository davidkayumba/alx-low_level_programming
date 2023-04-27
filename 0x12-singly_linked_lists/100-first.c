#include <stdio.h>

void __attribute__ ((constructor)) bmain()
/**
 * bmain - function executed before main
 * Return: no return
 */
void first(void)
{
	printf("You're beat! and yet, you must allow");
	printf("I bore my house upon my back!\n");
}

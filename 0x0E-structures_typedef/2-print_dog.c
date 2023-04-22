#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * print_dog - print a struct dog
 * @d: struct dog to print
 * Return: 0
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		printf("NULL pointer\n");
		return;
	}

	printf("Name: %s\n", d->name == NULL ? "(nil)" : d->name);
	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", d->owner == NULL ? "(nil)" : d->owner);
}

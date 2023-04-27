#include <stdio.h>
#include "lists.h"

/**
 * print_list -  Print all the elements of a list_l list
 * @h: A pointer to head of the list_t list
 *
 * Return: Number of nodes in the list_t list
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[%u] %s\n", 0, "(nil)");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		count++;
	}

	return (count);
}

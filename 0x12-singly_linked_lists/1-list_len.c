#include "lists.h"

/**
 * list_len - returns then number of elementsin a list
 * @h: singly linked list
 * Return: number in the list
 */

size_t list_len(const list_t *h)
{
	size_t count;

	count = 0;

	while (h != NULL)
	{
		h = h->next;

		count++;
	}
	return (count);
}

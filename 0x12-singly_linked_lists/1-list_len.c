#include "lists.h"

/**
 * list_len - number of elements in a linked list_t of list.
 * @h: Gives head of linked list.
 * Return: number of elements on success.
 */

size_t list_len(const list_t *h)
{
	size_t size;

	size = 0;
	while (h != NULL)
	{
		size++;
		h = h->next;
	}

	return (size);
}

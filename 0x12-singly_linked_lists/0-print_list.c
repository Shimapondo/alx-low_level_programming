#include "lists.h"
#include <stdio.h>
#include <string.h>

/**
 * print_list - prints all the elements of a list_t function in a given list
 * @h: Gives the  head of linked list.
 * Return: number of elements on success.
 */

size_t print_list(const list_t *h)
{
	size_t size;

	size = 0;
	while (h != NULL)
	{
		size++;
		if (h->str == NULL)
			printf("[%d] (nil)\n", 0);
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
	}
	return (size);
}

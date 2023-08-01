#include "lists.h"

/**
 * print_listint - function prints all the elements of a listint_t list.
 * @h: gives head of linked list.
 * Return: number of nodes on success.
 */

size_t print_listint(const listint_t *h)
{
	size_t size;

	size = 0;
	while (h != NULL)
	{
		size++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (size);
}

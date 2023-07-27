#include "lists.h"

/**
 * free_list - function  frees a list_t list.
 * @head: gives head of a linked list.
 * Return: void
 */

void free_list(list_t *head)
{
	list_t *temp;

	while (head != NULL)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
}

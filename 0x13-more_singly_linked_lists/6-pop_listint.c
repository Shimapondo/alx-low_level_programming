#include "lists.h"

/**
 * pop_listint - deletes head node and return node's data.
 * @head: gives head of linked list.
 * Return: node data (integer) on success.
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int n;

	temp = *head;
	n = 0;
	if (*head == NULL)
		return (n);
	*head = temp->next;
	n = temp->n;
	free(temp);
	return (n);
}

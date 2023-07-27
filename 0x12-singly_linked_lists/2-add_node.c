#include "lists.h"

/**
 * _strlen - function returns length of given string.
 * @s: string.
 * Return: length of string on success.
 */

int _strlen(const char *s)
{
	int len;

	len = 0;
	while (s[len] != '\0')
	{
		len++;
	}
	return (len);
}

/**
 * add_node - functions adds a new node at the beginning of list_t list.
 * @head: Gives head of linked list.
 * @str: provides string to be used as data for node.
 * Return: number of elements on success.
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	char *string;
	int length;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	if (str == NULL)
	{
		string = NULL;
		length = 0;
	}
	else
	{
		string = strdup(str);
		length = _strlen(str);
	}
	new->len = length;
	new->str = string;
	new->next = *head;
	*head = new;

	return (*head);
}

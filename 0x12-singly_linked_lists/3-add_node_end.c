#include "lists.h"
#include<string.h>
#include<stdlib.h>

/**
 * add_node_end - Adds a new node to the end of a list_t list
 * @head: Points to the head of a list of type list_t
 * @str: A string
 * Return: The address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	int l = 0;
	list_t *last, *iter;

	if (!str)
		return (NULL);

	last = malloc(sizeof(list_t));
	if (!last)
		return (NULL);

	while (str[l])
		l++;

	last->str = strdup(str);
	last->len = l;
	last->next = NULL;

	if (*head == NULL)
		*head = last;

	else
	{
		iter = *head;
		while (iter->next)
			iter = iter->next;
		iter->next = last;
	}
	return (last);
}

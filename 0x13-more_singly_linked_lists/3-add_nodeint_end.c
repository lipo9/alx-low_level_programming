#include "lists.h"
#include<stdlib.h>

/**
 * add_nodeint_end - Adds a new node to the end of a listint_t list
 * @head: Points to the head of a list of type listint_t
 * @n: integer value
 * Return: The address of the new element, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *last, *iter;

	last = malloc(sizeof(listint_t));
	if (!last)
		return (NULL);

	last->n = n;
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

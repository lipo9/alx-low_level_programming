#include "lists.h"
#include<stdlib.h>

/**
 * free_listint2 - free the memory taken by a listint_t list elements
 * @head: Addr of a list of type listint_t
 * Return: Void
 */
void free_listint2(listint_t **head)
{
	listint_t *t;

	if (head == NULL)
		return;
	while (*head)
	{
		t = (*head)->next;
		free(*head);
		*head = t;
	}
	head = NULL;
}



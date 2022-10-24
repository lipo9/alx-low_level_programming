#include "lists.h"
#include<stdlib.h>

/**
 * free_listint - free the memory taken by a listint_t list elements
 * @head: Addr of a list of type listint_t
 * Return: Void
 */
void free_listint(listint_t *head)
{
	if (head == NULL)
		return;
	free_listint(head->next);
	free(head);
}



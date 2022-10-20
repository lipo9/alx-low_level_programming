#include "lists.h"
#include<stdlib.h>

/**
 * free_list - free the memory taken by a list_t list elements
 * @head: Addr of a list of type list_t
 * Return: Void
 */
void free_list(list_t *head)
{
	if (head == NULL)
		return;
	free_list(head->next);
	free(head->str);
	free(head);
}



#include<stdlib.h>
#include "lists.h"

/**
 * pop_listint -  deletes the head node of a listint_t linked list
 * @head: points to the listint list's head
 * Return: The head node’s data (n)
 */
int pop_listint(listint_t **head)
{
	int d = 0;
	listint_t *h;

	if (*head)
	{
		h = *head;
		d = (*head)->n;
		*head = (*head)->next;
		free(h);
	}

	return (d);
}

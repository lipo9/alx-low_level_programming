#include "lists.h"
#include<stdlib.h>
/**
 * reverse_listint - Reverses a listint_t linked list
 * @head: Points to the head of a listint_t linked list
 * Return: A pointer to head of the reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev, *next;

	if (head == NULL || *head == NULL)
		return (NULL);

	prev = NULL;
	while ((*head)->next)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = next;
	}

	(*head)->next = prev;

	return (*head);
}

#include "lists.h"
#include<stdlib.h>

/**
 * add_nodeint - Adds a new node at the beginning of a listint_t list
 * @head: Points to the head of a list of type listint_t
 * @n: integer value
 * Return: a pointer to the new element otherwise NULL
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *first;

	first = malloc(sizeof(listint_t));
	if (!first)
		return (NULL);

	first->n = n;
	first->next = *head;
	*head = first;

	return (*head);
}

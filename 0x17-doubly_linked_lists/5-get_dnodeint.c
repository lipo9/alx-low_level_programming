#include "lists.h"

/**
 * get_dnodeint_at_index - returns the n-th node of a dlistint_t linked list
 * @head: Head of the list
 * @index: The index of the n-th node
 * Return: The n-th node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (!head)
		return (NULL);

	while (head->prev != NULL)
		head = head->prev;


	while (head != NULL)
	{
		if (i == index)
			break;
		head = head->next;
		i++;
	}
	return (head);
}

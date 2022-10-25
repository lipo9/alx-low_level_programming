#include "lists.h"
#include<stdlib.h>

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list
 * @head: Points to the head of the list
 * @index: The index of the node starting at 0
 * Return: The nth node of the list or NULL if it does not exist
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *current = head;

	if (!head || index == 0)
		return (head);

	while (current)
	{
		current = current->next;
		i++;
		if (index == i)
			return (current);
	}
	return (NULL);
}

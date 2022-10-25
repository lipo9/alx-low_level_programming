#include "lists.h"
#include<stdlib.h>

/**
 * delete_nodeint_at_index - Deletes the node at the given position
 * @head: Points to the head of a listint_t linked list
 * @index: The index of the node that should be deleted (starts at 0)
 * Return: 1 if succeeded or -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 1;
	listint_t *current = *head, *tmp;

	if (!(*head))
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(current);
		return (1);
	}

	while (current)
	{

		if (index == i)
		{
			tmp = current->next;
			current->next = tmp->next;
			free(tmp);
			return (1);
		}
		current = current->next;
		i++;
	}
	return (-1);
}

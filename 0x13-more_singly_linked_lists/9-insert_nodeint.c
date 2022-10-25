#include "lists.h"
#include<stdlib.h>

/**
 * insert_nodeint_at_index - Inserts a new node at a given position
 * @head: Points to hte head of a listint_t linked list
 * @idx: The index of the list where the new node should be added (starts at 0)
 * @n: The value to add at the index @idx to the linked list
 * Return: The address of the node, if not added return NULL
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 1;
	listint_t *current = *head, *new;

	new = malloc(sizeof(listint_t));

	if (new)
	{

		new->n = n;

		if (idx == 0)
		{
			new->next  = current;
			*head = new;
			return (new);
		}

		while (current)
		{

			if (idx == i)
			{
				new->next = current->next;
				current->next = new;
				return (new);
			}
			current = current->next;
			i++;
		}
	}
	return (NULL);
}



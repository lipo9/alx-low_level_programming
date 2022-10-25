#include "lists.h"
#include<stdio.h>
#include<stdlib.h>

/**
 * free_listint_safe - frees memory from all the elements of a listint_t list
 * @h: a pointer to a list of type listint_t
 * Return: The number of nodes in the list
 */
size_t free_listint_safe(listint_t **h)
{
	size_t count = 0;
	listint_t *tempo;
	list_p *li_1, *li_2, *new;

	li_1 = NULL;
	while (*h)
	{
		new = malloc(sizeof(list_p));

		if (new == NULL)
			exit(98);

		new->p = (void *)*h;
		new->next = li_1;
		li_1 = new;

		li_2 = li_1;

		while (li_2->next)
		{
			li_2 = li_2->next;
			if (*h == li_2->p)
			{
				*h = NULL;
				free_list_p(&li_1);
				return (count);
			}
		}

		tempo = *h;
		*h = (*h)->next;
		count++;
		free(tempo);
	}
	free(*h);
	free_list_p(&li_1);
	return (count);
}

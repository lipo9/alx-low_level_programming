#include "lists.h"
#include<stdio.h>

void free_list_p(list_p **head);

/**
 * print_listint_safe - prints all the elements of a listint_t list
 * @head: a pointer to a list of type listint_t
 * Return: The number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0;
	list_p *li_1, *li_2, *new;

	li_1 = NULL;
	while (head)
	{
		new = malloc(sizeof(list_p));

		if (new == NULL)
			exit(98);

		new->p = (void *)head;
		new->next = li_1;
		li_1 = new;

		li_2 = li_1;

		while (li_2->next)
		{
			li_2 = li_2->next;
			if (head == li_2->p)
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				free_list_p(&li_1);
				return (count);
			}
		}

		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
		count++;
	}

	free_list_p(&li_1);
	return (count);
}

/**
 * free_list_p - frees a listint_t linked list
 * @head: head of a listint_t linked list
 * Return: Void
 */

void free_list_p(list_p **head)
{
	list_p *tempo;
	list_p *current;

	if (head)
	{
		tempo = current = *head;
		while (current)
		{
			tempo = current;
			current = current->next;
			free(tempo);
		}
		*head = NULL;
	}
}

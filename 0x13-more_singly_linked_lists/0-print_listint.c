#include "lists.h"
#include <stdio.h>
#include <stddef.h>

/**
 * print_listint - prints all the elements of a listint_t list
 * @h: a pointers to a list of type listint_t
 * Return: The number of nodes in the list @h
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h)
	{
		printf("%d\n", h->n);
		count++;
		h = h->next;
	}
	return (count);
}

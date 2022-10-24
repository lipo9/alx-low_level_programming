#include "lists.h"

/**
 * listint_len - counts the nomber of the elements of a list of type listint_t
 * @h: a pointers to a list of type listint_t
 * Return: The number of elements in the list @h
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h)
		count++, h = h->next;
	return (count);
}

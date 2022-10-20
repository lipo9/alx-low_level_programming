#include "lists.h"

/**
 * list_len - counts the nomber of the elements of a list of type list_t
 * @h: a pointers to a list of type list_t
 * Return: The number of elements in the list @h
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h)
		count++, h = h->next;
	return (count);
}

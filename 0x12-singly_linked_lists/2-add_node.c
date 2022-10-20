#include "lists.h"
#include<string.h>
#include<stdlib.h>

/**
 * add_node - Adds a new node at the beginning of a list_t list
 * @head: Points to the head of a list of type list_t
 * @str: a string
 * Return: a pointer to the new element otherwise NULL
 */
list_t *add_node(list_t **head, const char *str)
{
	int l = 0;
	list_t *first;

	if (!str)
		return (NULL);

	first = malloc(sizeof(list_t));
	if (!first)
		return (NULL);


	while (str[l])
		l++;

	first->str = malloc(l * sizeof(char));
	if (first->str == NULL)
	{
		free(first->str);
		free(first);
		return (NULL);
	}

	first->str = strdup(str);
	first->len = l;
	first->next = *head;
	*head = first;

	return (*head);
}

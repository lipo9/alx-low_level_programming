#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list
 * @head: Points to the head of a listint_t linked list
 * Return: The address of the node where the loop starts,
 * or NULL if there is no loop
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *h1;
	listint_t *h2;

	h1 = head;
	h2 = head;
	while (head && h1 && h1->next)
	{
		head = head->next;
		h1 = h1->next->next;
		if (head == h1)
		{
			head = h2;
			h2 =  h1;
			while (1)
			{
				h1 = h2;
				while (h1->next != head && h1->next != h2)
				{
					h1 = h1->next;
				}
				if (h1->next == head)
					break;
				head = head->next;
			}
			return (h1->next);
		}
	}
	return (NULL);
}

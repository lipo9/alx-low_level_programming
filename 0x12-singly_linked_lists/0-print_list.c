#include "lists.h"
#include <stdlib.h>
#include <stddef.h>


/**
 * print_list - prints all the elements of a list_t list
 * @h: a pointers to a list of type list_t
 * Return: The number of nodes in the list @h
 */
size_t print_list(const list_t *h)
{
	int i;
	size_t count = 0;

	while (h)
	{
		if (h->str == NULL)
		{
			_putchar('[');
			_putchar('0');
			_putchar(']');
			_putchar(' ');
			_putchar('(');
			_putchar('n');
			_putchar('i');
			_putchar('l');
			_putchar(')');
			_putchar('\n');
		}

		else
		{
			_putchar('[');
			rec_print_int(h->len);
			_putchar(']');
			_putchar(' ');
			i = 0;
			while (h->str[i] != '\0')
			{
				_putchar(h->str[i]);
				i++;
			}
				_putchar('\n');
		}
		count++;
		h = h->next;
	}
	return (count);
}

/**
 * rec_print_int - Prints digits of integer number recursively
 * @n: integer
 * Return: Void
 */
void rec_print_int(unsigned int n)
{
	if (n / 10)
		rec_print_int(n / 10);
	_putchar(n % 10 + '0');
}

#include "lists.h"

/**
 * print_listint - print linked list of all the elements in the program
 * @h: linked list of type listint_t to print
 *
 * Return: number of all nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		printf("%d\n", h->n);
		num++;
		h = h->next;
	}

	return (num);
}

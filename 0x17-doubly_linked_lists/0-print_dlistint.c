#include "lists.h"

/**
 * print_dlistint - prints dlistint_t elements
 * @h: head of the list
 * Return: number ogf nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	int elem;

	elem = 0;

	if (h == NULL)
		return (elem);

	while (h->prev != NULL)
		h = h->prev;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		elem++;
		h = h->next;
	}
	return (elem);
}

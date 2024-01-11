#include "lists.h"
/**
 * dlistint_len - returns dlistint_len  num of elements
 * @h: linked list head
 * Return: number of nodes
 */

size_t dlistint_len(const dlistint_t *h)
{
	int num;

	num = 0;

	if (h == NULL)
		return (num);
	while (h->prev != NULL)
		h = h->prev;
	while (h != NULL)
	{
		num++;
		h = h->next;
	}
	return (num);
}

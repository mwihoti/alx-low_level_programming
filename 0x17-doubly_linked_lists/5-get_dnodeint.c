#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth of node list
 * @head: pointer to list head
 * @index: index of the node to searchfor
 * Return: nth node or null
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int nt;
	dlistint_t *n;

	nt = 0;
	if (head == NULL)
	return (NULL);

	n = head;
	while (n)
	{
	if (index == nt)
	return (n);
	nt++;
	n = n->next;
	}
	return (NULL);
}


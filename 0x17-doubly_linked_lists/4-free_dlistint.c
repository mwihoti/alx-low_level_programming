#include "lists.h"

/**
 * free_dlistint - free list
 * @head: head of list
 * Return: nothing
 */
void free_dlistint(dlistint_t *head)
{
	if (head == NULL)
	return;

	while (head->next)
	{
	head = head->next;
	free(head->prev);
	}
	free(head);
}

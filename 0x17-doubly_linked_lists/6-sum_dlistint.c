#include "lists.h"
/**
 * sum_dlistint - sums data in linkedlist
 * @head: head pointer of linked list
 * Return: 0 if empty or sum
 */
int sum_dlistint(dlistint_t *head)
{
	int sum;

	sum = 0;

	if (head != NULL)
	{
		while (head->prev != NULL)
			head = head->prev;

		while (head != NULL)
		{
			sum += head->n;
			head = head->next;
		}
	}
	return (sum);
}

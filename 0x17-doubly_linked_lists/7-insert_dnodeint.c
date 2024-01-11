#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts nodes at given positions
 * @h: head of list
 * idx: index of new node
 * @n: value of new node
 * Return:: address of new node else NULL
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_n;
	dlistint_t *head;
	unsigned int i;

	new_n = NULL;
	if (idx == 0)
		new_n = add_dnodeint(h, n);
	else
	{
		head = *h;
		i = 1;
		if (head != NULL)
			while (head->prev != NULL)
				head = head->prev;
		while (head != NULL)
		{
			if (i == idx)
			{
				if (head->next == NULL)
					new_n = add_dnodeint_end(h, n);
				else
				{
					new_n = malloc(sizeof(dlistint_t));
					if (new_n != NULL)
					{
						new_n->n = n;
						new_n->next = head->next;
						new_n->prev = head;
						head->next->prev = new_n;
						head->next = new_n;
					}
				}
				break;
			}
			head = head->next;
			i++;
		}
	}
	return (new_n);
}

#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes node at index of dlistint_t
 *
 * @head: head of the list
 * @index: index of new node
 *
 * Return: 1 if it succeed else -1 if failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *s1;
	dlistint_t *s2;
	unsigned int i;

	s1 = *head;

	if (s1 != NULL)
		while (s1->prev != NULL)
			s1 = s1->prev;
	i = 0;

	while (s1 != NULL)
	{
		if (i == index)
		{
			if (i == 0)
			{
				*head = s1->next;
				if (*head != NULL)
					(*head)->prev = NULL;
			}
			else
			{
				s2->next = s1->next;

				if (s1->next != NULL)
					s1->next->prev = s2;
			}
			free(s1);
			return (1);
		}
		s2 = s1;
		s1 = s1->next;
		i++;
	}

	return (-1);
}


#include "hash_tables.h"

/**
 * hash_table_delete - delete hash table
 * @ht: the hashtable
 * Return: null
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_table_t *h_table = ht;
	hash_node_t *new, *elm;

	if (ht == NULL)
		return;
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i])
		{
			new = ht->array[i];
			while (new != NULL)
			{
				elm = new->next;
				free(new->key);
				free(new->value);
				free(new);
				new = elm;
			}
		}
	}
	free(h_table->array);
	free(h_table);
}

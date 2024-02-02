#include "hash_tables.h"
/**
 * hash_table_create - create hash table
 * @size: table size
 * Return: pointer when hash table is created else NULL
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table_t;
	unsigned long int k;

	table_t = malloc(sizeof(hash_table_t));
	if (table_t == NULL)
	{
		return (NULL);
	}
	table_t->size = size;
	table_t->array = malloc(sizeof(hash_node_t *) * size);
	if (table_t->array == NULL)
	{
		return (NULL);
	}
	for (k = 0; k < size; k++)
	{
		table_t->array[k] = NULL;
	}
	return (table_t);
}	

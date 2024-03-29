#include "hash_tables.h"

/**
 * hash_table_get - retrieves values associated with a key
 * @ht: hash table
 * @key: key
 * Return: value or null
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *val;
	
	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	if (index >= ht->size)
		return (NULL);

	val = ht->array[index];
	while (val && strcmp(val->key, key) != 0)
		val = val->next;

	return ((val == NULL) ? NULL : val->value);
}

#include "hash_tables.h"

/**
 * hash_table_print - print key value pair in tables
 * @ht: hash table
 * Return: null
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *pr;
	unsigned long int i;
	unsigned char flag = 0;

	if (ht == NULL)
	{
		return;
	}
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i])
		{
			if (flag == 1)
			{
				printf(", ");
			}
			pr = ht->array[i];
			while (pr != NULL)
			{
				printf("%s: %s", pr->key, pr->value);
				pr = pr->next;
				if (pr != NULL)
					printf(", ");
			}
			flag = 1;
		}
	}
	printf("}/n");
}

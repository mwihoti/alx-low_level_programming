#include "hash_tables.h"
/**
 * key_index - get index of hash table
 * @key: key to convert
 * @size: size of the table
 * Return: the index received
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}

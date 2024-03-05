#include "hash_tables.h"

/**
 * hash_table_create - create a hash table
 * @size: size of the key
 *
 *Return: return the hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
hash_table_t *hashTable = malloc(sizeof(hash_table_t));
if (hashTable == NULL)
{
return (hashTable);
}
hashTable->size = size;
hashTable->array = malloc(sizeof(hash_node_t) * size);
return (hashTable);
}

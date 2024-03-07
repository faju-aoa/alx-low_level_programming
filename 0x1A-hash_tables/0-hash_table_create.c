#include "hash_tables.h"

/**
 * hash_table_create - create a hash table
 * @size: size of the key
 *
 *Return: return the hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
unsigned long int i;
hash_table_t *ht;
ht  = malloc(sizeof(hash_table_t));
if (ht == NULL)
{
return (NULL);
}
ht->size = size;
ht->array = malloc(sizeof(hash_node_t *) * size);
}
return (ht);
}

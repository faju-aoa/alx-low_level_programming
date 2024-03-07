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
hast_table_t *hashTable;
hashTable  = malloc(sizeof(hash_table_t));
if (hashTable == NULL)
{
return (NULL);
}
hashTable->array = malloc(sizeof(hash_node_t *) * size);
if (hashTable->array == NULL)
{
return (NULL);
}
for (i = 0; i < size; i++)
{
hashTable->array[i] = NULL;
}
hashTable->size = size;
return (hashTable);
}

#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 * @size: size of array
 * Return: pointer to newly created hash table
 * Description:
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i;
	hash_table_t *hs_t = (hash_table_t *) malloc(sizeof(hash_table_t));

	if (hs_t == NULL)
		return (NULL);
	hs_t->size = size;
	hs_t->array = (hash_node_t **) malloc(sizeof(hash_node_t *) * hs_t->size);
	if (hs_t->array == NULL)
		return (NULL);
	for (i = 0; i < hs_t->size; i++)
	{
		hs_t->array[i] = NULL;
	}
	return (hs_t);
}

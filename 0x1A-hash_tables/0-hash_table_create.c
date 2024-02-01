#include "hash_tables.h"

/**
 * hash_table_create - Initialize and allocates memory for a hash table.
 * @size: The desired size of the hash table array.
 *
 * Return: On success a pointer to the newly created hash table.
 *         On failure, NULL.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_table;
	unsigned long int index;

	new_table = malloc(sizeof(hash_table_t));
	if (new_table == NULL)
		return (NULL);

	new_table->size = size;
	new_table->array = malloc(sizeof(hash_node_t *) * size);
	if (new_table->array == NULL)
		return (NULL);
	for (index = 0; index < size; index++)
		new_table->array[index] = NULL;

	return (new_table);
}

#include "hash_tables.h"

/**
 * hash_table_delete - Deallocates memory used by a hash table.
 * @ht: A pointer to the hash table to be deallocated.
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_table_t *table_head = ht;
	hash_node_t *current_node, *temp_node;
	unsigned long int index;

	for (index = 0; index < ht->size; index++)

	{
		if (ht->array[index] != NULL)

		{
			current_node = ht->array[index];

			while (current_node != NULL)

			{
				temp_node = current_node->next;
				free(current_node->key);
				free(current_node->value);
				free(current_node);
				current_node = temp_node;
			}
		}
	}

	free(table_head->array);
	free(table_head);
}

#include "hash_tables.h"

/**
 * hash_table_print - Display the contents of a hash table.
 * @ht: A reference to the hash table for printing.
 *
 * Description: Outputs Key/value pairs in the order
 *              that are stored in the hash table array.
 *              Order: array, list
 *              Format: see example
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned char comma_flag = 0;
	unsigned long int i;

	if (ht == NULL)
		return;

	printf("{");

	for (i = 0; i < ht->size; i++)

	{
		hash_node_t *node = ht->array[i];

		while (node != NULL)

		{
			if (comma_flag != 0)
				printf(", ");
			printf("'%s': '%s'", node->key, node->value);
			comma_flag = 1;
			node = node->next;
		}
	}

	printf("}\n");
}

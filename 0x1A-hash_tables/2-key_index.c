#include "hash_tables.h"

/**
 * key_index - Get the index for storing a key/value
 * pair in a hash table array.
 * @key: The key to determine the index for.
 * @size: The size of the hash table array.
 *
 * Return: The calculated index for the key.
 * Description: Utilizes the djb2 algorithm.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}

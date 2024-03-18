#include "hash_tables.h"

/**
 * key_index - gives you index of a key
 * @key: key
 * @size: size of array of hash table
 *
 * Returns: index at which key/value pair should be stored
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}

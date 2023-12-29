#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with a key
 *
 * @ht: hash table to get value from
 * @key: key that is being searched for
 *
 * Return: value associated with the element, or NULL if key couldn't be found
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int keyIndex;
	hash_node_t *currentNode;

	if (ht == NULL || key == NULL)
		return (NULL);

	keyIndex = key_index((const unsigned char *)key, ht->size);
	currentNode = ht->array[keyIndex];

	while (currentNode != NULL)
	{
		if (strcmp(currentNode->key, key) == 0)
			return (currentNode->value);
		currentNode = currentNode->next;
	}
	return (NULL);
}

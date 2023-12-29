#include "hash_tables.h"

/**
 * handleCollision - handles collision by adding node to the beginning of list
 * @ht: hash table to be updated
 * @idx: index of the key
 * @Node: node to be added
 *
 * Return: void
 */

int handleCollision(hash_table_t *ht, unsigned long int idx, hash_node_t *Node)
{
	Node->next = ht->array[idx];
	ht->array[idx] = Node;
	return (1);
}


/**
 * create_Node - creates a node
 * @key: key to be added
 * @value: value to be added
 *
 * Return: pointer to the newly created node
 */

hash_node_t* create_Node(char* key, char* value)
{
	hash_node_t *newNode = NULL;
	if (key == NULL)
		return (NULL);

	newNode = malloc(sizeof(hash_node_t));
	if (newNode == NULL)
		return (NULL);
	newNode->key = strdup(key);
	newNode->value = strdup(value);
	return (newNode);
}

/**
 * hash_table_set - adds an element to the hash table
 * @ht: hash table to be updated
 * @key: key to be added
 * @value: value to be added
 *
 * Return: 1 if successful, 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *newNode, *currentNode;
	unsigned long int keyIndex, i;

	if (ht == NULL)
		return (0);

	newNode = create_Node((char *)key, (char *)value);
	if (newNode == NULL)
		return (0);

	keyIndex = key_index((const unsigned char *)key, ht->size);

	for (i = keyIndex; ht->array[i]; i++)
	{
		if (strcmp(ht->array[i]->key, key) == 0)
		{
			free(ht->array[i]->value);
			ht->array[i]->value = strdup(value);
			return (1);
		}
	}

	currentNode = ht->array[keyIndex];
	if (currentNode == NULL)
	{
		ht->array[keyIndex] = newNode;
		newNode->next = NULL;
		return (1);
	}
	else
	{
		if (strcmp(currentNode->key, key) == 0)
		{
			strcpy(ht->array[keyIndex]->value, value);
			return (1);
		}
		else
		{
			handleCollision(ht, keyIndex, newNode);
			return (1);
		}
	}
}

#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 * @ht: hash table to be printed
 *
 * Return: void
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *currentNode;
	int flag = 0;

	if (ht == NULL)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		currentNode = ht->array[i];
		if (currentNode == NULL)
			continue;
		if (flag == 1)
			printf(", ");
		printf("'%s': '%s'", currentNode->key, currentNode->value);
		flag = 1;
	}
	printf("}\n");
}

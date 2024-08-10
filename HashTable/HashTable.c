#define   _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
#include <stdbool.h>

#define HASH_SHIFT 4
#define HASH_SIZE	(1 << HASH_SHIFT)
#define HASH_MASK (HASH_SIZE - 1)

struct hash_table 
{
	unsigned int used;
	unsigned long entry[HASH_SIZE];
};

void hash_table_reset(struct hash_table* table)
{
	int i = 0;
	table->used = 0;
	for (i = 0; i < HASH_SIZE; i++)
	{
		table->entry[i] = ~0;
	}
}

unsigned int hash_faction(unsigned long value)
{
	return value & HASH_MASK;
}

void dump_hash_table(struct hash_table* table)
{
	for (int i = 0; i < HASH_SIZE; i++)
	{
		if (table->entry[i] == ~0)
			printf("%2u:       nil\n", i);
		else
			printf("%2u:%10lu -> %2u\n", i, table->entry[i], Hash_faction(table->entry[i]));
	}
}

unsigned int next_probe(unsigned int prev_key)
{
	return (prev_key + 1) & HASH_MASK;
}

void hash_table_add(struct hash_table* table, unsigned long value)
{
	unsigned int key = hash_faction(value);

	if (table->used >= HASH_SIZE)
		return;
	while (table->entry[key] != ~0)
		key = next_probe(key);

	table->entry[key] = value;
	table->used++;
}

unsigned int hash_table_slot(struct hash_table* table, unsigned long value)
{
	unsigned int key = hash_faction(value);
	for (int i = 0; i < HASH_SIZE; i++)
	{
		if (table->entry[key] == value || table->entry[key] == ~0)
			break;
		key = next_probe(key);
	}
	return key;
}

bool hash_table_find(struct hash_table* table, unsigned long value)
{
	return table->entry[hash_table_slot(table, value)] == value;
}

void hash_table_del(struct hash_table* table, unsigned long value)
{
	if (!hash_table_find(table, value))
		return;
	unsigned int i, j,k;
	i = j = hash_table_slot(table, value);
	while (true)
	{
		table->entry[i] = ~0;
		do 
		{
			j = next_probe(j);
			if (table->entry == ~0)
				return;
			k = hash_faction(table->entry[j]);
		} while ((i <= j) ? (i < k && k <= j) : (i < k || k <= j));
		table->entry[i] = table->entry[j];
		i = j;
	}
	table->used++;
}
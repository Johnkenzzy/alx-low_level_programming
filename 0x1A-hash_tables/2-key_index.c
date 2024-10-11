#include "hash_tables.h"


/**
 * key_index - generates an index for a key within the hash table size
 * @key: the key to generate an index for
 * @size: the size of the array of the hash table
 *
 * Return: the key index
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int key_index;

	key_index = hash_djb2(key);
	key_index = key_index % size;

	return (key_index);
}


/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    char *s;
    unsigned long int hash_table_array_size;

    hash_table_array_size = 1024;
    s = "cisfun";
    printf("%lu\n", hash_djb2((unsigned char *)s));
    printf("%lu\n", key_index((unsigned char *)s, hash_table_array_size));
    s = "Don't forget to tweet today";
    printf("%lu\n", hash_djb2((unsigned char *)s));
    printf("%lu\n", key_index((unsigned char *)s, hash_table_array_size));
    s = "98";
    printf("%lu\n", hash_djb2((unsigned char *)s));
    printf("%lu\n", key_index((unsigned char *)s, hash_table_array_size));
    return (EXIT_SUCCESS);
}

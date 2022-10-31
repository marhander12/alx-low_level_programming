#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: memory space to be filled
 * @b: byte to fill with
 * @n: number of spaces to fill
 *
 * Return: pointer to memory area s
 */
void *_memset(void *s, int c, size_t n)
{
	unsigned int i;
        unsigned char *memory = s , value = c;
	for (i = 0; i < n; i++)
		memory[index] = value;
	return (memory);
}

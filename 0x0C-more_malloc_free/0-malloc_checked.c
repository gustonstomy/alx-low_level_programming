#include "main.h"

/**
 * malloc_checked - allocates memory using malloc
 * @b: bytes to alocate
 * Return: pointer or null
 */
void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
	exit(98);
	return (ptr);
}

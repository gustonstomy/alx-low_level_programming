#include "main.h"

/**
 * *_memcpy - a function that copies memory area
 * @dest: recieve memory area
 * @src: source of memory area
 * @n: numner of bytes
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(dest + i) = *(src + i);
	}
	return (dest);
}

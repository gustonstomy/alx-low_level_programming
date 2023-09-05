#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates an array of chars
 * @c: string to allocate
 * @size: the size of the memory to print
 *
 * Return: a pointer to the array.
 */

char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i = 0;

	if (size == 0)
		return (NULL);

	if (size != 0)
	{
		ptr = (char *)malloc(sizeof(char) * size);
		while (i < size)
		{
			if (ptr == NULL)
				return (NULL);

			ptr[i] = c;
			i++;
		}
	}
	return (ptr);
}

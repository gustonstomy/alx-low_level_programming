#include <stdlib.h>

/**
* _realloc - reallocate a memory block
* @ptr: memory block to reallocate
* @old_size: size of memory
* @new_size: sizeof new memory block in bytes
* Return: pointer to new memory block or NULL
*/

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *i;

	if (old_size == new_size)
		return (ptr);
	if (ptr == NULL)
		return ((void *)malloc(new_size));
	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	i = malloc(new_size);
	if (i == NULL)
		return (NULL);
	if (old_size > new_size)
		old_size = new_size;
	while (old_size--)
		i[old_size] = ((char *)ptr)[old_size];
	free(ptr);
	return ((void *)i);
}

#include <stdlib.h>

/**
* array_range - create an array of integers
* @min: minimum value
* @max: maximum
* Return: pointer of array
*/

int *array_range(int min, int max)
{
	int *ptr, i;

	if (min > max)
		return (NULL);
	ptr = malloc((max - min + 1) * sizeof(*ptr));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; min + i <= max; i++)
	{
		ptr[i] = min + i;
	}
	return (ptr);
}

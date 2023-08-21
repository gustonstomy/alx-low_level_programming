#include "main.h"

/**
* print_array - t prints n elements of an array of integers
* @a: name of ARRAY
* @n: is the numberof elements
* Return:a and n
*/
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);

		if (i != (n - 1))
		{
		printf(", ");
		}
	}
	printf("\n");
}

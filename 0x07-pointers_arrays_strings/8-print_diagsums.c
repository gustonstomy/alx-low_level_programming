#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals of a square matrix
 * @a: pointer
 * @size: width of array
 * Reutrn: void
 */

void print_diagsums(int *a, int size)
{
	int i, j, q;
	int l = 0, k = 0;

	for (i = 0; i < size; i++)
	{
		q = (i * size) + i;
		l += *(a + q);
	}
	for (j = 0; j < size; j++)
	{
		q = (j * size) + (size - 1 - j);
		k += *(a + q);
	}
	printf("%i, %i\n", l, k);
}

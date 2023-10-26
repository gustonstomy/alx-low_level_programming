#include "main.h"
/**
 * clear_bit - sets the value of a bit
 * @n: number to set
 * @index: index at which to set bit
 * Return: 1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int tmp;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	tmp = ~(1 << index);
	*n = *n & tmp;
	return (1);
}

#include "main.h"
/**
 * print_binary -  that prints the binary representation of a number.
 * @n: A pointer to a string
 * Return: null
 */

void print_binary(unsigned long int n)
{
	int i;
	unsigned int temp;
	int counter = 0;

	for (i = 63; i >= 0; i--)
	{
		temp = n >> i;

		if (temp & 1)
		{
			_putchar('1');
			counter++;
		}
		else if (counter)
			_putchar('0');
	}

	if (!counter)
		_putchar('0');
}

#include"main.h"
/**
 * flip_bits -    returns the number of bits you would need
 * to flip to get from one number to another.
 * @n: number 1
 *@m: number 2
 * Return: returns the number of bits you would need to flip
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int counter = 0;
	unsigned long int exclusive =  n ^ m;

	while (exclusive)
	{
		counter += exclusive & 1;
		exclusive = exclusive >> 1;
	}
	return (counter);
}

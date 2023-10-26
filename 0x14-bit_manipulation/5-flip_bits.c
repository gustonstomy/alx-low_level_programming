#include "main.h"

/**
 * flip_bits - flip number to another
 * @n: first integer
 * @m: second integer
 * Return: number of bits to change
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int ans;
	unsigned long int xor;

	ans = 0;
	xor = n ^ m;
	while (xor)
	{
		ans += xor & 1;
		xor = xor >> 1;
	}
	return (ans);
}

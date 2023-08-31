#include "main.h"

/**
 * squrt - Makes possible to evaluate from 1 to n
 * @i: base number as n
 * @j: number that iterates from 1 to n
 * Return: 0
 */
int squrt(int i, int j)
{
	if (j * j == i)
		return (j);
	if (j * j > i)
		return (-1);
	return (squrt(i, j + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of n
 * @n: Number Integer
 * Return: 0
 */

int _sqrt_recursion(int n)
{
	return (squrt(n, 1));
}

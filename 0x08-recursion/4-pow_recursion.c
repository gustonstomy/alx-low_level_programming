#include "main.h"

/**
 * _pow_recursion - raises x to the power of y
 * @x: Integer 1
 * @y: integer 2
 * Return: 0
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 1)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}

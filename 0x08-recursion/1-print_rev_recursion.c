#include "main.h"

/**
 * _print_rev_recursion - function that returns the length of a string
 * @s: string to return length of
 * Return: 0
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}

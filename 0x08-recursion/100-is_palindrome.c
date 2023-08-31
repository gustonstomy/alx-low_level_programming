#include "main.h"

/**
 * palindrom - obtains length of a
 * @a: string
 * @b: integer to count length
 * Return: 0.
 */
int palindrom(char *a, int b)
{
	if (*a == 0)
		return (b - 1);
	return (palindrom(a + 1, b + 1));
}
/**
 * palindNum - compares string vs string reverse
 * @a: string
 * @b: length
 * Return: 0
 */

int palindNum(char *a, int b)
{
	if (*a != *(a + b))
		return (0);
	else if (*a == 0)
		return (1);
	return (palindNum(a + 1, b - 2));
}
/**
 * is_palindrome - checks if a string is a palindrome
 * @s: string to evaluate
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int is_palindrome(char *s)
{
	int i;

	i = palindrom(s, 0);
	return (palindNum(s, i));
}

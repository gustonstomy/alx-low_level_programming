#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * binary_to_uint -  a function that converts a binary
 * number to an unsigned int.
 * @b: A pointer to a string
 * * Return:  the converted number,
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int result;

	result = 0;
	if (!b)
		return (0);
	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
	}
	for (i = 0; b[i] != '\0'; i++)
	{
		result <<= 1;
		if (b[i] == '1')
			result += 1;
	}
	return (result);
}

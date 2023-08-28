#include "main.h"

/**
 * set_string - function that sets the value of a pointer to a char
 * @s: changed pointer
 * @to: string to be changed
 * Return: void
 */

void set_string(char **s, char *to)
{
	*s = to;
}

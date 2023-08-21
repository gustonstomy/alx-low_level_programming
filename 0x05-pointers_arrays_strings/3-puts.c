#include "main.h"

/**
 * _puts - prints a string
 * @str : String
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		putchar(*str++);
	}
	putchar('\n');
}

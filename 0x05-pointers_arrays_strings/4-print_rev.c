#include "main.h"
/**
 * print_rev - print reverse
 * @s: string
 * Return: Always 0
 */
void print_rev(char *s)
{
	int len = 0;
	int l;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	s--;
	for (l = len; l > 0; l--)
	{
		putchar(*s);
		s--;
	}
	putchar('\n');
}

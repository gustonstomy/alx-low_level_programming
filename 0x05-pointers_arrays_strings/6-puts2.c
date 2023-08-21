#include "main.h"
/**
 * puts2 - prints every other character of a string
 * starting with the first character
 * @str: Input string
 * Return: print;
 */
void puts2(char *str)
{
	int len = 0;
	int x = 0;
	char *y = str;
	int i;

	while (*y != '\0')
	{
		y++;
		len++;
	}
	x = len - 1;
	for (i = 0; i <= x; i++)
	{
		if (i % 2 == 0)
			putchar(str[i]);
	}
	putchar('\n');
}

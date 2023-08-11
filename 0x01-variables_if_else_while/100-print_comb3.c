#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
*main - Prints all possible different combinations of two digits
*Return: Always (Success)
*/

int main(void)
{
	int p, b;

	for (b = '0'; b < '9'; b++)
	{

	for (p = b + 1; p <= '9'; p++)
	{
	if (p != b)
	{
	putchar(b);
	putchar(p);
	if (b == '8' && p == '9')
	continue;
	putchar(',');
	putchar(' ');
	}
	}
	}
	putchar('\n');

	return (0);
}

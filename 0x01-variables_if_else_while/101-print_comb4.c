#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
*main - Prints all possible different combinations of two digits
*Return: Always (Success)
*/

int main(void)
{
	int q, p, b;

	for (b = '0'; b < '9'; b++)
	{

	for (p = b + 1; p <= '9'; p++)
	{
	for (q = p + 1; q <= '9'; q++)
	{
	if ((p != b) != q)
	{
	putchar(b);
	putchar(p);
	putchar(q);
	if (b == '7' && p == '8')
	continue;
	putchar(',');
	putchar(' ');
	}
	}
	}
	}
	putchar('\n');
	return (0);
}

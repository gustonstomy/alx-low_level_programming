#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
*main - Prints numbers should range from 0 to 99
*Return: Always 0 (Success)
*/

int main(void)
{
	int n, q;

	for (n = 0; n <= 98; n++)
	{
	for (q = n + 1; q <= 99; q++)
	{
	putchar((n / 10) + '0');
	putchar((n % 10) + '0');
	putchar(' ');
	putchar((q / 10) + '0');
	putchar((q / 10) + '0');
	if (n == 98 && q == 99)
	continue;
	putchar(',');
	putchar(' ');
	}
	}
	putchar('\n');
	return (0);
}

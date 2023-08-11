#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
*main - Prints single numbers with putchar
*Return: Always (Success)
*/

int main(void)
{
	int n;

	for (n = '0'; n <= '9'; n++)
		putchar(n);
	putchar('\n');

	return (0);
}

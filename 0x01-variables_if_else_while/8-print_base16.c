#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
*main - Prints numbers of base 16 in lowercase
*Return: Always (Success)
*/

int main(void)
{
	int n;
	char d;

	for (n = '0'; n <= '9'; n++)
		putchar(n);
	for (d = 'a'; d <= 'f'; d++)
		putchar(d);
	putchar('\n');

	return (0);
}

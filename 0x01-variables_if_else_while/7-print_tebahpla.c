#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
*main - Prints lowercase in reverse
*Return: Always (Success)
*/

int main(void)
{
	char n;

	for (n = 'z'; n >= 'a'; n--)
		putchar(n);
	putchar('\n');

	return (0);
}

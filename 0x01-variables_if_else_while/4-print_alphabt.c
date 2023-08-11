#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
*main - Print all the letters except q and e
*Return: Always (Success)
*/

int main(void)
{
	char q, e, n;

	e = 'e';
	q = 'q';
	for (n = 'a'; n <= 'z'; n++)
		if (n != q && n != e)
			putchar(n);
	putchar('\n');

	return (0);
}

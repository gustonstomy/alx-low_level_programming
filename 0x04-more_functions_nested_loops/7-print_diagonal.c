#include "main.h"
/**
*print_diagonal -  Draw diagonal line
*@n: number of times to print
*Return: Empty
*/

void print_diagonal(int n)
{
int y, x;

if (n <= 0)
{
_putchar('\n');
}
else
{
for (x = 0; x < n; x++)
{
for (y = 0; y < x; y++)
{
_putchar(32);
}
_putchar(92);
_putchar('\n');
}
}
}

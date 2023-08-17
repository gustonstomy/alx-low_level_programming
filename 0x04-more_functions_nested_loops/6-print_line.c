#include "main.h"
/**
*print_line -  Draw straight line
*@n: number of lines to draw
*Return: Empty
*/

void print_line(int n)
{
int y;

if (n <= 0)
{
_putchar('\n');
}
else
{
for (y = 0; y < n; y++)
{
_putchar(95);
}
_putchar('\n');
}
}

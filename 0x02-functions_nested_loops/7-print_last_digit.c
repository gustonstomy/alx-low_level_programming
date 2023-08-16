#include "main.h"

/**
*print_last_digit - Prints the sign of a number
*@c: The character to be checked
*Return: 1 for for positvie, -1 for negative else 0
*/

int print_last_digit(int c)
{
int last;

last = c % 10;
if (last < 0)
{
last = last * -1;
}
_putchar(last + '0');
return (last);
}

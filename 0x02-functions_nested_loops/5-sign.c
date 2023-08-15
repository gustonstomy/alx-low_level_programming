#include "main.h"

/**
*print_sign - Prints the sign of a number
*@c: The character to be checked
*Return: 1 for for positvie, -1 for negative else 0
*/

int print_sign(int c)
{

if (c > 0)
{
_putchar (43);
return (1);
}
else if (c < 0)
{
_putchar (45);
return (-1);
}
else
{
_putchar (48);
return (0);
}
}

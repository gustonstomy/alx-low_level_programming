#include "main.h"
/**
*_isdigit- Check if a character is digit
*@x: The number to be checked
*Return: 1 for character that is a digit or 0 for any
*/

int _isdigit(int x)
{
if (x >= 48 && x <= 57)
{
return (1);
}
return (0);
}

#include <stdio.h>
/**
* _atoi - Convert string to integer.
* @s: The pointer to be converted
* Return: An integer
*/

int _atoi(char *s)
{
int x = 0;

unsigned int y = 0;
int min = 1;
int lss = 0;

while (s[x])
{
if (s[x] == 45)
{
min *= -1;
}

while (s[x] >= 48 && s[x] <= 57)
{
lss = 1;
y = (y * 10) + (s[x] - '0');
x++;
}

if (lss == 1)
{
break;
}

x++;
}

y *= min;
return (y);
}

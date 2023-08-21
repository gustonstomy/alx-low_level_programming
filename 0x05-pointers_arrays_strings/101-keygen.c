#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
* main - program that generates random
* Return: Always 0
*/

int main(void)
{
int y, b, a, x;
char c[] = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char p[58];

srand(time(NULL));
while (x != 2772)
{
y = a = x = 0;
while ((2772 - 122) > x)
{
b = rand() % 62;
p[y] = c[b];
x += c[b];
y++;
}
while (c[a])
{
if (c[a] == (2772 - x))
{
p[y] = c[a];
x += c[a];
y++;
break;
}
a++;
}
}
p[y] = '\0';
printf("%s", p);
return (0);
}

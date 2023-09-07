#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * string_nconcat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * @n: number of bytes
 * Return: pointer to the new string.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int x = 0, i, j = 0, k = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[x])
		x++;

	while (s2[k])
		k++;

	if (n >= k)
		n = k;

	if (s1 != NULL && s2 != NULL)
	{
		ptr = malloc(x + n + 1);
		if (ptr != NULL)
		{
			for (i = 0; i < x + n; i++)
			{
				if (s1[i])
				{
					ptr[i] = s1[i];
				}
				else
				{
					ptr[i] = s2[j];
					j++;
				}
			}
		}
	}
	ptr[i] = '\0';
	return (ptr);
}

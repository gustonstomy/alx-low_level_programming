#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * str_concat - concatenates two strings
 * @s1: string 1
 *@s2: string 2
 * Return: pointer to the new string.
 */

char *str_concat(char *s1, char *s2)
{
	char *ptr;
	int i, len, len2;

	if (s1 != NULL && s2 != NULL)
	{
		len = strlen(s1);
		len2 = strlen(s2);
		ptr = (char *)malloc(sizeof(char) * (len + len2 + 1));

		if (ptr != NULL)
		{
			for (i = 0; i < len; i++)
			{
				ptr[i] = s1[i];
			}
			for (i = 0; i < len2; i++)
			{
				ptr[len + i] = s2[i];
			}

			ptr[len + len2] = '\0';

			return (ptr);
		}

	}

	return (NULL);
}

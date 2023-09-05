#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * _strdup - contains a copy of the string given as a parameter.
 * @str: string of text
 * Return: pointer to the new string.
 */

char *_strdup(char *str)
{
	char *ptr;
	int i, len;

	if (str != NULL)
	{
		len = strlen(str);
		ptr = (char *)malloc(sizeof(char) * (len + 1));

		if (ptr != NULL)
		{
			for (i = 0; i < len; i++)
			{
				ptr[i] = str[i];
			}
			ptr[len] = '\0';
		}
	}
	else
		return (NULL);

	return (ptr);
}

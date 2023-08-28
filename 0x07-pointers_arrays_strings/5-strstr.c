#include "main.h"

/**
 * *_strstr - function that  locates a substring
 * @haystack: string
 * @needle: substring
 * Return: a pointer to the beginning of the located substring,
 * or NULL if the substring is not found.
*/

char *_strstr(char *haystack, char *needle)
{
	unsigned int i, j;

	for (i = 0; haystack[i]; i++)
	{
		for (j = 0; needle[j]; j++)
		{
			if (haystack[i] == needle[j])
				break;
		}
		if (!needle[j])
			return (needle);
	}
	return (0);
}

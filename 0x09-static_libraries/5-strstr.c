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

	j = 0;
	i = 0;

	while (haystack[i])
	{
		while (haystack[i] == needle[0])
		{
			if (haystack[i + j] == needle[j])
				j++;
			else
				break;
		}
		if (needle[j])
		{
			i++;
			j = 0;
		}
		else
			return (haystack + i);
	}
	return (0);
}

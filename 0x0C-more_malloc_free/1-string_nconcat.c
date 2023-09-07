#include <stdlib.h>

/**
* str - length of string
* @s: string to compute length
* Return: string length
*/

unsigned int str(char *s)
{
	unsigned int len = 0;

	while (*s++)
		len++;
	return (len);
}

/**
* string_nconcat - that concatenates two strings.
* @s1: string s2
* @s2: string s1
* @n: number of characters of s2 to concat with s1
* Return: pointer to allocated memory
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, len2 = 0, len1 = 0;
	char *ptr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
<<<<<<< HEAD
	while (s1[x])
		x++;

	while (s2[k])
		k++;

	if (n >= k)
		n = k;

	if (s1 != NULL && s2 != NULL)
=======
	len1 = str(s1);
	len2 = str(s2);
	if (n > len2)
		n = len2;
	ptr = malloc(len1 + n + 1);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < len1 + n; i++)
>>>>>>> 9bf00a6a22d5239944d1fef675739993b462cb98
	{
		if (*s1)
		{
			ptr[i] = *s1;
			s1++;
		}
		else
		{
<<<<<<< HEAD
			for (i = 0; i < x + n; i++)
			{
				if (s1[i])
				{
					ptr[i] = s1[i];
				}
				else
				{
					ptr[i] = *s2;
					s2++;
				}
			}
=======
			ptr[i] = *s2;
			s2++;
>>>>>>> 9bf00a6a22d5239944d1fef675739993b462cb98
		}
	}
	ptr[i] = '\0';
	return (ptr);
}

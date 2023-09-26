#include "lists.h"
#include <stdlib.h>

/**
 * free_listint_safe -  function that frees a listint_t list.
 * @h: pointer
 * Return: the size of the list that was free’d
 */
size_t free_listint_safe(listint_t **h)
{
	size_t len = 0;
	int i;
	listint_t *ptr;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		i = *h - (*h)->next;
		if (i > 0)
		{
			ptr = (*h)->next;
			free(*h);
			*h = ptr;
			len++;
		}
		else
		{
			free(*h);
			*h = NULL;
			len++;
			break;
		}
	}

	*h = NULL;

	return (len);
}

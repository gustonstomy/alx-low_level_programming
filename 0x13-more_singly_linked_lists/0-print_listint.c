#include "lists.h"
#include <stdlib.h>

size_t print_listint(const listint_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		count ++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (count);
}


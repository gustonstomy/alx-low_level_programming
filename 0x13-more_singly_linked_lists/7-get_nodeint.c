#include "lists.h"
#include <stdlib.h>

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked lis
 * @head: first node in the linked list
 * @index: index of the node to return
 * Return: pointer to the node we're looking for, or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *ptr = head;

	while (ptr && i < index)
	{
		ptr = ptr->next;
		i++;
	}

	return (ptr ? ptr : NULL);
}

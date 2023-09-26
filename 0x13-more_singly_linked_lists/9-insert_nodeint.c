#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index -  inserts a new node at a given position.
 * @head: pointer to the first node
 * @idx: index where the new node will be added
 * @n: data to insert
 * Return: pointer to the new node, or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *ptr;
	listint_t *temp = *head;

	ptr = malloc(sizeof(listint_t));
	if (!ptr || !head)
		return (NULL);

	ptr->n = n;
	ptr->next = NULL;

	if (idx == 0)
	{
		ptr->next = *head;
		*head = ptr;
		return (ptr);
	}

	for (i = 0; temp && i < idx; i++)
	{
		if (i == idx - 1)
		{
			ptr->next = temp->next;
			temp->next = ptr;
			return (ptr);
		}
		else
			temp = temp->next;
	}

	return (NULL);
}

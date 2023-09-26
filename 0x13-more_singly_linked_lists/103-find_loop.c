#include "lists.h"
#include <stdlib.h>

/**
 * find_listint_loop - that finds the loop in a linked list.
 * @head: A pointer
 * Return: The address of the node where the loop starts,
 * or NULL if there is no loop
*/
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *ptr = head;
	listint_t *new = head;

	if (!head)
		return (NULL);

	while (ptr && new && new->next)
	{
		new = new->next->next;
		ptr = ptr->next;
		if (new == ptr)
		{
			ptr = head;
			while (ptr != new)
			{
				ptr = ptr->next;
				new = new->next;
			}
			return (new);
		}
	}

	return (NULL);
}

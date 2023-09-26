#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint -  deletes the head node of a listint_t linked list
 * @head: pointer to the first element in the linked lis
 * Return: the data inside the elements that was deleted,
 */
int pop_listint(listint_t **head)
{
	listint_t *ptr;
	int temp;

	if (!head || !*head)
		return (0);

	temp = (*head)->n;
	ptr = (*head)->next;
	free(*head);
	*head = ptr;

	return (temp);
}

#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * listint_sup - a support function for listint
 * @head: linked list where to search
 * Return: address, NULL if no loop
 */
listint_t *listint_sup(listint_t *head)
{
	listint_t *ptr, *temp;

	if (head == NULL)
		return (NULL);

	for (temp = head->next; temp != NULL; temp = temp->next)
	{
		if (temp == temp->next)
			return (temp);
		for (ptr = head; ptr != temp; ptr = ptr->next)
			if (ptr == temp->next)
				return (temp->next);
	}
	return (NULL);
}

/**
 * print_listint_safe -  that prints a listint_t linked list.
 * @head: head of list to print
 * Return: number of nodes printed
 */
size_t print_listint_safe(const listint_t *head)
{
	int next;
	size_t len = 0;
	listint_t *new;

	new = listint_sup((listint_t *) head);

	for (len = 0, next = 1; (head != new || next) && head != NULL; len++)
	{
		printf("[%p] %d\n", (void *) head, head->n);
		if (head == new)
			next = 0;
		head = head->next;
	}

	if (new != NULL)
		printf("-> [%p] %d\n", (void *) head, head->n);
	return (len);
}

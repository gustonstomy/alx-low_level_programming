#include <stdlib.h>
#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list_t list.
 * @head: pointer
 * @str: pointer to string
 * Return: the address of the new element, or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	int counter = 0;
	list_t *last_node, *ptr;

	last_node = malloc(sizeof(list_t));
	if (last_node == NULL)
		return (NULL);

	if (str)
	{
		last_node->str = _strdup(str);
		while (str[counter] != '\0')
			counter++;
		last_node->len = counter;
	}
	else
	{
		last_node->str = NULL;
		last_node->len = 0;
	}
	last_node->next = NULL;
	if (*head)
	{
		ptr = *head;
		while (ptr->next != NULL)
			ptr = ptr->next;
		ptr->next = last_node;
	}
	else
		*head = last_node;
	return (last_node);
}

/**
 * _strdup - function with one argument
 * @str: string argument
 * Description: returns a pointer to allocated space in memory
 * Return: pointer
 */

char *_strdup(const char *str)
{
	int x, y;
	char *temp;

	if (str == NULL)
		return (NULL);
	x = 0;
	while (*(str + x) != '\0')
	{
		x++;
	}

	temp = malloc(sizeof(char) * x + 1);

	if (temp == NULL)
		return (NULL);

	y = 0;
	while (str[y] != '\0')
	{
		temp[y] = str[y];
		y++;
	}
	temp[y] = '\0';
	return (temp);
}

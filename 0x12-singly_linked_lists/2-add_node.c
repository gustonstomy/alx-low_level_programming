#include <stdlib.h>
#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: double pointer to linked list
 * @str: A pointer
 * Return:  the address of the new element, or NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
	int counter = 0;
	list_t *temp;

	temp = malloc(sizeof(list_t));

	if (temp == NULL)
		return (NULL);
	temp->str = _strdup(str);
	while (str[counter] != '\0')
		counter++;
	temp->len = counter;
	temp->next = *head;
	*head = temp;
	return (temp);
}

/**
 * _strdup - A strdup function
 * @str: takes the string as an argument
 * Return: A pointer
 */

char *_strdup(const char *str)
{
	int x, y;
	char *ptr;

	if (str == NULL)
		return (NULL);
	x = 0;
	while (*(str + x) != '\0')
	{
		x++;
	}

	ptr = malloc(sizeof(char) * x + 1);

	if (ptr == NULL)
		return (NULL);

	y = 0;
	while (str[y] != '\0')
	{
		ptr[y] = str[y];
		y++;
	}
	ptr[y] = '\0';
	return (ptr);
}

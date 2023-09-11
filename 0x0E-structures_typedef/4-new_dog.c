#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - creates a new dog.
 * @name: name.
 * @age: age.
 * @owner: owner.
 * Return: pointer to new dog.
 *
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dogo;
	char *n, *o;
	int a = 0, b = 0;

	dogo = malloc(sizeof(dog_t));
	if (dogo == NULL)
		return (NULL);
	for (; *(name + a); a++)
		;
	for (; *(owner + b); b++)
		;
	n = (char *)malloc(sizeof(char) * (a + 1));
	o = (char *)malloc(sizeof(char) * (b + 1));

	if (!(n && o))
	{
		if (!o && n)
			free(n);
		free(dogo);
		return (NULL);
	}
	for (; a >= 0; a--)
		*(n + a) = *(name + a);
	for (; b >= 0; b--)
		*(o + b) = *(owner + b);
	dogo->name = n;
	dogo->age = age;
	dogo->owner = o;
	return (dogo);
}

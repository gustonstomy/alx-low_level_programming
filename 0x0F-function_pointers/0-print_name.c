#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
* print_name- this functions prints a name
* @name: string to print.
* @f: function pointer
* Return: void
*/

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		(*f)(name);
}

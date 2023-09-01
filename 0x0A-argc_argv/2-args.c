#include <stdlib.h>
#include <stdio.h>

/**
* main - print the program name
* @argv: strings containing the program name and arguments
* @argc: number of strings in argv
* Return: Always 0
*/

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}

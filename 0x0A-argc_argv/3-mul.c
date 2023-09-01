
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
	(void) argc;

	if (argc != 3)
	{
		puts("Error");
		return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}

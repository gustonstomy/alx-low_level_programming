#include "main.h"

/**
 * main - copies the content of a file to another file
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments
 * Return:  0 on success.
 */
int main(int argc, char *argv[])
{
	int from, to, r, a, b;
	char buffer[BUFSIZ];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	from = open(argv[1], O_RDONLY);
	if (from < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	while ((r = read(from, buffer, BUFSIZ)) > 0)
	{
		if (to < 0 || write(to, buffer, r) != r)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			close(from);
			exit(99);
		}
	}
	if (r < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	a = close(from);
	b = close(to);
	if (a < 0 || b < 0)
	{
		if (a < 0)
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", from);
		if (b < 0)
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", to;
		exit(100);
	}
	return (0);
}

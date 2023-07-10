
#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *create_buffer(char *file);
void close_file(int fd);

/**
 * create_buffer - this Function Allocates 1024 bytes for a buffer.
 * @file:this paremetor The name of the file buffer is storing chars for.
 *
 * Return: A pointer
 */
char *create_buffer(char *file)
{
	char *my_uffer;

	my_uffer = malloc(sizeof(char) * 1024);

	if (my_uffer == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
		exit(99);
	}

	return (my_uffer);
}

/**
 * close_file - this fuction  Closes file descriptors.
 * @fd: This parameter file descriptor to be closed.
 */
void close_file(int fd)
{
	int x;

	x = close(fd);

	if (x == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - this main fuction copies the contents of a file
 * @argc: this parameterThe number of arguments supplied to the program.
 * @argv: this array of pointers to the arguments.
 *
 * Return: 0 on success.
 *
 * Description: If the argument count is incorrect - exit code 97.
 * If file_from does not exist or cannot be read - exit code 98.
 * If file_to cannot be created or written to - exit code 99.
 * If file_to or file_from cannot be closed - exit code 100.
 */
int main(int argc, char *argv[])
{
	int my_from, a, b, c;
	char *mybuffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	mybuffer = create_buffer(argv[2]);
	my_from = open(argv[1], O_RDONLY);
	b = read(my_from, mybuffer, 1024);
	a = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (my_from == -1 || b == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(mybuffer);
			exit(98);
		}

		c = write(a, mybuffer, b);
		if (a == -1 || c == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(mybuffer);
			exit(99);
		}

		b = read(my_from, mybuffer, 1024);
		a = open(argv[2], O_WRONLY | O_APPEND);

	} while (b > 0);

	free(mybuffer);
	close_file(my_from);
	close_file(a);

	return (0);
}



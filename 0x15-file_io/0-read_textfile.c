#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- this fuction text file print to STDOUT.
 * @filename: this parameter text file being read
 * @letters:this parameter number of letters to be read
 * Return: b- actual number of bytes read and printed
 *        0 when function fails or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *my_buf;
	ssize_t a;
	ssize_t b;
	ssize_t c;

	a = open(filename, O_RDONLY);
	if (a == -1)
		return (0);
	my_buf = malloc(sizeof(char) * letters);
	c = read(a, my_buf, letters);
	b = write(STDOUT_FILENO, my_buf, c);

	free(my_buf);
	close(a);
	return (b);
}


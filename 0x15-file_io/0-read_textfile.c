#include "main.h"
#include <stdlib.h>

/**
 * read_textfile-this Fuction Read text file print to STDOUT.
 * @filename:this paraem text file being read
 * @letters:this paramnumber of letters to be read
 * Return: R- actual number of bytes read and printed
 *        0 when function fails or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *my_buf;
	ssize_t my_fd;
	ssize_t R;
	ssize_t T;

	my_fd = open(filename, O_RDONLY);
	if (my_fd == -1)
		return (0);
	my_buf = malloc(sizeof(char) * letters);
	T = read(my_fd, my_buf, letters);
	R = write(STDOUT_FILENO, my_buf, T);

	free(my_buf);
	close(my_fd);
	return (R);
}


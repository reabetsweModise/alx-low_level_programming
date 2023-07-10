#include "main.h"

/**
 * create_file - this fuction  Creates a file.
 * @filename: tihs parameter  pointer to the name of the file to create.
 * @text_content:this parameter pointer to a string to write to the file.
 *
 * Return:  -1.
 */
int create_file(const char *filename, char *text_content)
{
	int R, T, my_index = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (my_index = 0; text_content[my_index];)
			my_index++;
	}

	R = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	T = write(R, text_content, my_index);

	if (R == -1 || T == -1)
		return (-1);

	close(R);

	return (1);
}


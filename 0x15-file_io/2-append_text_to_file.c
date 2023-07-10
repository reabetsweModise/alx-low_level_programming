#include "main.h"

/**
 * append_text_to_file -this fuction Appends text at the end of a file.
 * @filename:this pointer to the name of the file.
 * @text_content: this  string parameter to add to the end of the file.
 *
 * Return: -1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int L, M, my_index = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (my_index = 0; text_content[my_index];)
			my_index++;
	}

	L = open(filename, O_WRONLY | O_APPEND);
	M = write(L, text_content, my_index);

	if (L == -1 || M == -1)
		return (-1);

	close(L);

	return (1);
}


#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file.
 * @filename : is the name of the file
 * @text_content: is the NULL terminated string to add at the end of the file
 * Return: 1 on success and -1 on failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int topn, twrt, i;

	if (!filename)
		return (-1);

	if (text_content)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	topn = open(filename, O_WRONLY | O_APPEND);
	twrt = write(o, text_content, len);

	if (topn == -1 || twrt == -1)
		return (-1);

	close(topn);

	return (1);
}

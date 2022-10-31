#include "main.h"

/**
 * create_file - creates a file.
 * @filename: is the name of the file to create
 * @text_content: is a NULL terminated string to write to the file
 * Return: 1 on success, -1 on failure or filename is NULL
 */
int create_file(const char *filename, char *text_content)
{
	int cfopen, i;
	ssize_t cfwrite;

	if (!filename)
		return (-1);

	if (text_content)
	{
		for (i = 0; text_content[i];)
			i++;
	}

	cfopen = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	cfwrite = write(cfopen, text_content, i);

	if (cfopen == -1)
		return (-1);

	if (cfwrite == -1)
	{
		write(1, "fails", 6);
		return (-1);
	}
	close(cfopen);

	return (1);
}

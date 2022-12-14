#include "main.h"

/**
 * create_file - creates a file.
 * @filename: is the name of the file to create
 * @text_content: is a NULL terminated string to write to the file
 * Return: 1 on success, -1 on failure or filename is NULL
 */
int create_file(const char *filename, char *text_content)
{
	int fd, i;
	ssize_t cfwrite;

	if (!filename)
		return (-1);
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);
	if (text_content)
	{
		i = 0;
		while (*(text_content + i) != '\0')
			i++;
		cfwrite = write(fd, text_content, i);
		if (cfwrite == -1)
		{
			write(1, "fails", 6);
			return (-1);
		}
	}
	close(fd);
	return (1);
}

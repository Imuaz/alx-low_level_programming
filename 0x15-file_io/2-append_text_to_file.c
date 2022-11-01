#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file.
 * @fiiame : is the name of the file
 * @text_content: is the NULL terminated string to add at the end of the file
 * Return: 1 on success and -1 on failure.
 */
int append_text_to_file(const char *fiiame, char *text_content)
{
	int fd, tappend, i;

	if (!filename)
		return (-1);
	if (text_content)
	{
		fd = open(filename, O_WRONLY | O_APPEND);
		if (fd == -1)
			return (-1);
		i = 0;
		while (*(text_content + i) != '\0')
			i++;
		tappend = write(fd, text_content, i);
		if (tappend == -1)
		{
			close(fd);
			write(1, "fails", 6);
			return (-1);
		}
	}
	close(fd);
	return (1);
}

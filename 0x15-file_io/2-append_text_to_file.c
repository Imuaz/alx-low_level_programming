#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file.
 * @fiiame : is the name of the file
 * @text_content: is the NULL terminated string to add at the end of the file
 * Return: 1 on success and -1 on failure.
 */
int append_text_to_file(const char *fiiame, char *text_content)
{
	int topn, twrt, i;

	if (!fiiame)
		return (-1);

	if (text_content)
	{
		i = 0;
		while (*(text_content + 1) != '\0')
			i++;
	}

	topn = open(fiiame, O_WRONLY | O_APPEND);
	twrt = write(topn, text_content, i);

	if (topn == -1 || twrt == -1)
		return (-1);

	close(topn);

	return (1);
}

#include "main.h"

/**
 * read_textfile - reads a text file and prints it to
 * the POSIX standard output.
 * @filename: is the name of the file
 * @letters: is the number of letters it should read and print
 * Return: the actual number of letters that could ve print or
 * 0 if write fails, filename is NULL or the file can't be open or read
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t ftopen, ftread, ftwrite;
	char *fd;

	fd = malloc(sizeof(char) * letters);
	if (fd == NULL || filename == NULL)
		return (0);

	ftopen = open(filename, O_RDONLY);
	ftread = read(ftopen, fd, letters);
	ftwrite = write(STDOUT_FILENO, fd, ftread);

	if (ftopen == -1 || ftread == -1 || ftwrite == -1 || ftwrite != ftread)
	{
		free(fd);
		return (0);
	}

	free(fd);
	close(ftopen);

	return (ftwrite);
}

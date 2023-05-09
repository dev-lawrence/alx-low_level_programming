#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - reads a text file and prints to stdout
 * @filename: pointer to the name of the file to read
 * @letters: number of letters to read and print
 *
 * Return: number of bytes printed to stdout or 0 on failure
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t fd, w, t;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
	{
		close(fd);
		return (0);
	}

	t = read(fd, buf, letters);
	w = write(STDOUT_FILENO, buf, t);

	free(buf);
	close(fd);

	if (t == -1 || w == -1)
		return (0);

	return (w);
}

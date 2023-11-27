#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - the function that reads a
 * text file and prints it to the posix standard output.
 * @filename:read the text filename
 * letters: the number of letters to print
 * Return: success the actual number of letters or 0 if fails.
 */
ssize_t read_textfile(const char *filename, size_t letters)

{
	char *buffer;
	ssize_t fd;
	ssize_t w;
	ssize_t t;

	fd = open(filename, O_RDONLY);

	if (fd == -1)

	return (0);

	buffer = malloc(sizeof(char) * letters);

	t = read(fd, buffer, letters);
	w = write(STDOUT_FILENO, buffer, t);

	free(buffer);
	close(fd);

	return (w);
}




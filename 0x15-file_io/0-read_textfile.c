#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * read_textfile - reads a text file and prints the letters
 * @filename: filename.
 * @letters: numbers of letters printed.
 *
 * Return: numbers of letters printed. It fails, returns 0.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fp;
	ssize_t nread, nwrite;
	char *ptr;

	if (!filename)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	ptr = malloc(letters);

	nread = read(fd, ptr, letters);
	nwrite = write(STDOUT_FILENO, ptr, nread);

	close(fd);

	free(ptr);
	return (nwrite);
}

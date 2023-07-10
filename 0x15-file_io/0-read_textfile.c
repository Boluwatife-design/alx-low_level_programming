#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * read_textfile-function that read a text file
 * and prints to POSIX STDOUT
 * @letters:numbers of letters, it should read and print
 * @filename:file to be opened or read
 * Return:if filename is NULL return 0
 * if write fails/does not write expected amount of bytes,return 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t fd;
	ssize_t w;
	ssize_t r;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	r = read(fd, buf, letters);
	w = write(STDOUT_FILENO, buf, r);

	free(buf);
	close(fd);
	return (w);
}

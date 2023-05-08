#include "main.h"
#include <stdlib.h>

/**
 * read_textfile-function that read a txt file and
 * prints it to the POXIS std output
 * @filename: file to be open or read
 * @letters: number of letters to read and print
 * Return: actual no of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t fd;
	ssize_t w;
	ssize_t t;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	t = read(fd, buf, letters);
	w = write(STDOUT_FILENO, buf, t);

	free(buf);
	close(fd);
	return (w);
}

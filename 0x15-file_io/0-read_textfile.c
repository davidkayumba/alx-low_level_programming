#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: filename
 * @letters: numbers of letters printed
 *
 * Return: numbers of letters printed. It fails, returns 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;

	ssize_t lenr, lenw;

	char *buf;

	if (!filename)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * (letters));
	if (!buf)
		return (0);
	lenr = read(fd, buf, letters);
	lenw = write(STDOUT_FILENO, buf, lenr);
	close(fd);
	free(buf);
	return (lenw);
}

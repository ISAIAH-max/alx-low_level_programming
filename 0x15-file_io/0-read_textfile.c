#include "main.h"

/**
 *read_textfile-function that reads a text file and prints it
 *to the POSIX standard output
 *@filename: the file name
 *@letters:number of letters it should read and print
 *Return:number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buf;
	ssize_t rd, wr;

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
	rd = read(fd, buf, letters);
	close(fd);
	if (rd == -1)
	{
		free(buf);
		return (0);

	}
	wr = write(STDOUT_FILENO, buf, rd);
	free(buf);

	if (rd != wr)
		return (0);

	return (wr);
}

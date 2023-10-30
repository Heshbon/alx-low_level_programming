#include "main.h"

#include <fcntl.h>

/**
 * read_textfile - function that reads a test file
 * and prints it to the POSIX stdout
 * @filename: the character string
 * @letters: the number of letters to read and print
 * Return: the actual number of letters it could read and print
 *
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t n, p;
	char *buffer;

	if (filename == NULL)
		return (0);
	
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		free(buffer);
		return (0);
	}
	n = read(fd, buffer, letters);
	if (n == -1)
		return (0);
	p = write(STDOUT_FILENO, buffer, n);
	if (p == -1 || n != p)
		return (0);
	free(buffer);
	return (p);
}

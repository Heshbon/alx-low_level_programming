#include "main.h"

#define MAXSIZE 1024
#define SE STDERR_FILENO

#include <fcntl.h>
#include <stdio.h>

/**
 * main - program that copies the content of a file to another file
 * @ac: the arguement count
 * @av: the argument string value
 * Return: 0
 */

int main(int ac, char *av[])
{
	int a_fd, b_fd, n, p;
	char buffer[MAXSIZE];
	mode_t mode;

	mode = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;
	if (ac != 3)
		dprintf(SE, "Usage: cp file_from file_to\n"), exit(97);
	a_fd = open(av[1], O_RDONLY);
	if (a_fd == -1)
		dprintf(SE, "Error: Can't read from file %s\n", av[1]), exit(98);
	b_fd = open(av[2], O_CREAT | O_WRONLY | O_TRUNC, mode);
	if (b_fd == -1)
		dprintf(SE, "Error: Can't write to %s\n", av[2]), exit(99);
	do {
		n = read(a_fd, buffer, MAXSIZE);
		if (n == -1)
		{
			dprintf(SE, "Error: Can't read from file %s\n", av[1]);
			exit(98);
		}
		if (n > 0)
		{
			p = write(b_fd, buffer, (ssize_t) n);
			if (p == -1)
			{
				dprintf(SE, "Error: Can't write to %s\n", av[2]);
				exit(99);
			}
		}
	} while (n > 0);
	n = close(a_fd);
	if (n == -1)
		dprintf(SE, "Error: Can't close fd %d\n", a_fd), exit(100);
	p = close(b_fd);
	if (p == -1)
		dprintf(SE, "Error: Can't close fd %d\n", b_fd), exit(100);
	return (0);
}

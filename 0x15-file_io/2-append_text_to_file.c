#include "main.h"

#include <fcntl.h>

/**
 * append_text_to_file - function that appends text at the end of a file
 * @filename: the name of the file
 * @text_content: string to add at the end of the file
 * Return: 1 on success and -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, n, p;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		return (1);

	fd = open(filename, O_APPEND | O_WRONLY);
	if (fd == -1)
		return (-1);

	for (p = 0; text_content[p] != '\0'; p++)
		;
	n = write(fd, text_content, p);
	if (n == -1)
		return (-1);

	close(fd);
	return (1);
}

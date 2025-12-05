#include "main.h"
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <string.h>

/**
 *append_text_to_file - function that
 *appends text at the end of a file.
 *@filename: Name of files
 *@text_content: String
 *
 * Return: -1 if fail or 1 if succed.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t len = 0;
	ssize_t bytes_written;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_RDONLY | O_APPEND);
	if (text_content == NULL)
	{
		close(fd);
		return (1);
	}
	len = strlen(text_content);
	bytes_written = write(fd, text_content, len);
	if (bytes_written != len)
	{
		close(fd);
		return (-1);
	}
	close(fd);
	return (1);
}

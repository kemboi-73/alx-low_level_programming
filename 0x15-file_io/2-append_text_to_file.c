#include "main.h"
#include <string.h>

/**
 * append_text_to_file - Append text to the end of a file
 * @filename: name of file
 * @text_content: string to add to end of file
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, status;
	size_t len;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		return (1);

	len = strlen(text_content);
	fd = open(filename, O_APPEND | O_WRONLY);
	if (fd == -1)
		return (-1);

	status = write(fd, text_content, len);
	if (status == -1)
		return (-1);

	close(fd);
	return (1);
}



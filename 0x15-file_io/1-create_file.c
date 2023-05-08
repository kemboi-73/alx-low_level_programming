#include "main.h"
#include <string.h>
/**
 * create_file - create a file with read/write access for user
 * @filename: name of file to create
 * @text_content: string to write to file
 * Return: 1 on success, -1 on failure
 *
 */
int create_file(const char *filename, char *text_content)
{
int fd, rstatus;

if (filename == NULL)
return (-1);

fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);
if (fd == -1)
return (-1);

if (text_content != NULL)
	{
	size_t length = strlen(text_content);

rstatus = write(fd, text_content, length);

if (rstatus == -1)
	{
	close(fd);
	return (-1);
	}
}

	close(fd);

return (1);
}



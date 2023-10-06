#include "main.h"

/**
 * append_text_to_file - append text to file
 * @filename: filename
 * @text_content: text to append
 * Return: Always (1) on Success or (-1) on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	long _write;

	if (!filename)
	{
		return (-1);
	}
	fd  = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		_write = write(fd, text_content, strlen(text_content));
		if (_write == -1)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (1);
}

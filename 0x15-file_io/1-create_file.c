#include "main.h"

/**
 * create_file - create file and write into it
 * @filename: name of file will be created
 * @text_content: text that will be written into file
 * Return: Always (1) on Success or (-1) on failure
 */

int create_file(const char *filename, char *text_content)
{
	int fd;
	mode_t mode = S_IRUSR | S_IWUSR;
	long int _write;

	if (!(filename))
	{
		return (-1);
	}
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, mode);
	if (fd == -1)
	{
		return (-1);
	}
	if (text_content)
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

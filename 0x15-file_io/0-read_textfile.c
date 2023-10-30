#include "main.h"
/**
 * read_textfile - readfrom the file and print to stdout using POSIX functions
 * @filename: filename read from
 * @letters: number of letters in file to be allocted
 * Return: return size of object in bytes or and err indecator
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buffer;
	long int readed;
	int _write;

	if (filename)
	{
		fd = open(filename, O_RDONLY);
		if (fd == -1)
		{
			return (0);
		}
		buffer = malloc(sizeof(char) * (letters + 1));
		if (buffer == NULL)
		{
			return (0);
		}
		readed = read(fd, buffer, letters);
		if (readed <= 0)
		{
			close(fd);
			return (0);
		}
		_write = write(STDOUT_FILENO, buffer, readed);
		if (_write == -1)
		{
			return (0);
		}
	}
	else
	{
		return (0);
	}
	free(buffer);
	close(fd);
	return (_write);
}

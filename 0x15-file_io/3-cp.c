#include "main.h"
void _abort(int err, char **argv);
/**
 * _abort - exit the process
 * @err: error
 * @argv: argument vector
 * Return: none
 */

void _abort(int err, char **argv)
{
	if (err == 1)
	{
		dprintf(STDERR_FILENO, "Useage: cp file_from file_to\n");
		exit(97);
	}
	else if (err == 2)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	else if (err == 3)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
}

/**
 * main - Entry point
 * @argc: argument counter
 * @argv: argumetn vector
 * Return: Always (0) Success
 */

int main(int argc, char **argv)
{
	int fd;
	ssize_t x = 0, y = 1024;
	char buffer[1024];
	mode_t mode = S_IRUSR | S_IWUSR | S_IRGRP | S_IROTH;
	int cd;

	if (argc != 3)
	{
		_abort(1, argv);
	}
	fd = open(argv[1], O_RDONLY);
	if (fd < 0)
	{
		_abort(2, argv);
	}
	cd = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC | O_APPEND, mode);
	if (cd < -1)
	{
		_abort(3, argv);
	}
	while (y == 1024)
	{
		y = read(fd, buffer, y);
		if (y == -1)
		{
			_abort(2, argv);
		}
		x = write(cd, buffer, y);
		if (x == -1)
		{
			_abort(3, argv);
		}
	}
	y = close(fd);
	if (y == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
	y = close(cd);
	if (y == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", cd);
		exit(100);
	}
	return (0);
}

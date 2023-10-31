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
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	if (err == 2)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (err == 3)
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

int main(int argc, char *argv[])
{
	int file_from, file_to, c;
	ssize_t x = 0, y = 1024;
	char buffer[1024];
	mode_t mode = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;

	if (argc != 3)
	{
		_abort(1, argv);
	}
	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)
	{
		_abort(2, argv);
	}
	file_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC | O_APPEND, mode);
	if (file_to == -1)
	{
		_abort(3, argv);
	}
	while (y == 1024)
	{
		y = read(file_from, buffer, y);
		if (y == -1)
		{
			close(file_from);
			close(file_to);
			_abort(2, argv);
		}
		x = write(file_to, buffer, y);
		if (x == -1)
		{
			close(file_from);
			close(file_to);
			_abort(3, argv);
		}
	}
	c = close(file_from);
	if (c == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}
	c = close(file_to);
	if (c == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_to);
		exit(100);
	}
	return (0);
}

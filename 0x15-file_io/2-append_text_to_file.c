#include "main.h"
size_t _strlen(char *s);

/**
 * _strlen - get length of string
 * @s: string
 * Return: num
 */
size_t _strlen(char *s)
{
	size_t i;

	for (i = 0; *s != '\0'; ++s)
	{
		++i;
	}
	return (i);
}

/**
 * append_text_to_file - append text to file
 * @filename: filename
 * @text_content: text to append
 * Return: Always (1) on Success or (-1) on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int file = open(filename, O_WRONLY | O_APPEND), c;
	size_t len = _strlen(text_content);
	ssize_t w;

	if (file == -1 || filename == NULL)
	{
		return (-1);
	}
	w = write(file, text_content, len);

	if (w == -1)
	{
		return (-1);
	}
	c = close(file);
	if (c == -1)
	{
		return (-1);
	}
	return (1);
}

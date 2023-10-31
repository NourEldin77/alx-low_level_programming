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
	int file = open(filename, O_WRONLY | O_APPEND);
	ssize_t w;

	if (file == -1 || filename == NULL)
	{
		return (-1);
	}
	else if (text_content != NULL)
	{
		w = write(file, text_content, _strlen(text_content));

		if (w == -1)
		{
			close(file);
			return (-1);
		}
	}
	close(file);
	return (1);
}

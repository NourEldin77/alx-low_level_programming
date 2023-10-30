#include "main.h"

int main(int ac, char *av[])
{
	if (ac != 3)
		dprintf(STERR_FILENO, "Usage: cp file_from file_to\n");
		exit (97);
	int file_from_read = open(av[1], O_RDONLY),
		file_to_write = open(av[2], O_TRUNC | O_WRONLY);
	char buffer[1024];
	ssize_t r = read(file_from_read, buffer, 1024), w = ;
	
	if (file_from_read == -1 || r == -1)
		dprintf(STERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		exit (98);
	
}

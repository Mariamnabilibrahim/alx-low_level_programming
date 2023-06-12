#include <stdio.h>
#include <stdlib.h>
#include "main.h"


#define USAGE "Usage: cp file_from file_to\n"
#define ERR_NOREAD "Error: Can't read from file %s\n"
#define ERR_NOWRITE "Error: Can't write to %s\n"
#define ERR_NOCLOSE "Error: Can't close fd %d\n"
#define PERMISSIONS (S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH)

/**
 * main - function
 * @x: input
 * @y: input
 * Return: 0 on failure, 1 on success.
*/

int main(int x, char **y)
{
	int from_file = 0, to_file = 0;
	ssize_t z;
	char buffer[READ_BUFFER_SIZE];

	if (x != 3)
		dprintf(STDERR_FILENO, USAGE), exit(97);
	from_file = open(y[1], O_RDONLY);
	if (from_file == -1)
		dprintf(STDERR_FILENO, ERR_NOREAD, y[1]), exit(98);
	to_file = open(y[2], O_WRONLY | O_CREAT | O_TRUNC, PERMISSIONS);
	if (to_file == -1)
		dprintf(STDERR_FILENO, ERR_NOWRITE, y[2], exit(99);

	while ((z = read(from_file, buffer, READ_BUFFER_SIZE)) > 0)
	if (write(to_file, buffer, z) != z)
		dprintf(STDERR_FILENO, ERR_NOWRITE, y[2]), exit(99);

	if (z == -1)
		dprintf(STDERR_FILENO, ERR_NOREAD, y[1], exit(98);

	from_file = close(from_file);
	to_file = close(to_file);
	if (from_file)
		dprintf(STDERR_FILENO, ERR_NOCLOSE, from_file), exit(100);
	if (to_file)
		dprintf(STDERR_FILENO, ERR_NOCLOSE, from_file), exit(100);
	return (EXIT_SUCCESS);
}

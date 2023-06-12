#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * read_textfile - a function that reads a text file and
 *	prints it to the POSIX standard output.
 * @filename: input
 * @letters: is the number of letters it should read and print
 *
 * Return: the actual number of letters it could read and print
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	int file;
	ssize_t byte;
	char buffer[READ_BUFFER_SIZE * 8];

	if (!filename || !letters)
		return (0);

	file = open(filename, O_RDONLY);
	if (file == -1)
		return (0);
	byte = read(file, &buffer[0], letters);
	byte = write(STDOUT_FILENO, &buffer[0], byte);
	close(file);
	return (byte);
}

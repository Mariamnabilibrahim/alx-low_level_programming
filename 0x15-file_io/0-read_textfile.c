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
	int f;
	ssize_t b;
	char buf[READ_BUF_SIZE * 8];

	if (!filename || !letters)
		return (0);

	f = open(filename, O_RDONLY);
	if (f == -1)
		return (0);
	b = read(f, &buf[0], letters);
	b = write(STDOUT_FILENO, &buf[0], b);
	close(f);
	return (b);
}

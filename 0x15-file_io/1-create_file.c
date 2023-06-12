#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _lenght - function to find the lenght of string
 * @str: string
 * Return: the lenght
*/

int _lenght(char *str)
{
	int x = 0;

	if (!str)
		return (0);

	while (*str++)
		x++;
	return (x);
}

/**
 * create_file -  function that creates a file
 * @filename:  is the name of the file
 * @text_content: is a NULL terminated string to write to the file
 *
 * Returns: 1 on success, -1 on failure (file can not be created,
 *	file can not be written, write “fails”, etc…)
*/

int create_file(const char *filename, char *text_content)
{
	int file;
	ssize_t byte = 0, l = _lenght(text_content);

	if (!filename)
		return (-1);
	file = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (file == -1)
		return (-1);
	if (l)
		byte = write(file, text_content, l);
	close(file);
	return (byte == l ? 1 : -1);
}

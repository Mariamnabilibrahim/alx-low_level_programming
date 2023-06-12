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
 * append_text_to_file - function that appends text at the end of a file.
 * @filename: is the name of the file
 * @text_content: is the NULL terminated string to add at the end of the file
 * Return: 1 on success and -1 on failure
*/

int append_text_to_file(const char *filename, char *text_content)
{
	int file;
	ssize_t byte = 0, l = _lenght(text_content);

	if (!filename)
		return (-1);
	file = open(filename, O_WRONLY | O_APPEND);
	if (file == -1)
		return (-1);
	if (l)
		byte = write(file, text_content, l);
	close(file);
	return (byte == l ? 1 : -1);
}

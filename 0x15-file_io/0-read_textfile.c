#include "main.h"
/**
 * read_textfile - reads a text file
 *
 * @filename: the file
 *
 * @letters: number of chars
 *
 * Return: Length
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	int readit;
	ssize_t length;

	if (filename == NULL)
		return (0);
	readit = open(filename, O_RDONLY);
	if (readit < 0)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		close(readit);
		return (0);
	}
	length = read(readit, buffer, letters);
	close(readit);
	if (length < 0)
	{
		free(buffer);
		return (0);
	}
	length = write(STDOUT_FILENO, buffer, length);
	if (length < 0)
	{
		free(buffer);
		return (0);
	}
	return (length);
}

#include "main.h"
/**
 * append_text_to_file - appends text to a file
 *
 * @filename: name of the file appended
 *
 * @text_content: contents to write to file
 *
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int append;

	if (filename == NULL)
		return (-1);
	append = open(filename, O_WRONLY | O_APPEND, 0600);
	if (append < 0)
		return (-1);
	if (text_content != NULL)
	{
		write(append, text_content, strlen(text_content));
	}
	close(append);
	return (1);
}

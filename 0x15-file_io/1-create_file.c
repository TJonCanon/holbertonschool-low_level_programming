#include "main.h"
/**
 * create_file - creates file
 *
 * @filename: name of file
 *
 * @text_content: contents of file
 *
 * Return: 1 for success
 */
int create_file(const char *filename, char *text_content)
{
	int create;

	if (filename == NULL)
		return (-1);
	create = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0700);
	if (create < 0)
		return (-1);
	if (text_content != NULL)
	{
		write(create, text_content, strlen(text_content));
	}
	close(create);
	return (1);
}

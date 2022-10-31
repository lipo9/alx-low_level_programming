#include "main.h"

/**
 * create_file - Creates a file
 * @filename: A pointer to the name of the file to create
 * @text_content: A pointer to the string to write to the file
 * Return: 1 if the function fails, otherwise return -1
 */

int create_file(const char *filename, char *text_content)
{
	int fd, w, l = 0;

	if (!filename)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	if (!text_content)
		text_content = "";

	while (*(text_content + l))
	{
		l++;
	}

	w = write(fd, text_content, l);
	close(fd);

	if (w == -1)
		return (-1);
	return (1);
}

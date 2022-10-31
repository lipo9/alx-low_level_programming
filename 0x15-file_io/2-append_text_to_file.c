#include "main.h"

/**
 * append_text_to_file -  Appends text at the end of a file
 * @filename: Points to the name of the file and
 * @text_content: The NULL terminated string to add at the end of the file
 * Return: 1 on success and -1 on failure
 *		If filename is NULL return -1
 *		If text_content is NULL, does not add anything to the file.
 *		returns 1 if the file exists and -1 if the file does not exist
 *		or if it do not have the required permissions to write the file
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, w, l = 0;

	if (!filename)
		return (-1);

	if (!text_content)
		return (1);

	while (*(text_content + l))
	{
		l++;
	}

	fd = open(filename, O_WRONLY | O_APPEND);
	w = write(fd, text_content, l);
	close(fd);

	if (fd == -1 || w == -1)
		return (-1);
	return (1);
}

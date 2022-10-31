#include <stdlib.h>
#include "main.h"

/**
 * read_textfile -  reads a text file and prints it to the POSIX stdout
 * @filename: A pointer to the name of the file
 * @letters: The number of letters to read and print
 * Return:  the actual number of letters it could read and print. Or
 *		0, if the file can not be opened or read
 *		0, if filename is NULL
 *		0, if write fails or does not write the expected amount of bytes
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t o, r, w;

	if (!filename)
		return (0);

	buf = malloc(sizeof(char) * letters);
	if (!buf)
		return (0);

	o = open(filename, O_RDONLY);
	r = read(o, buf, letters);
	w = write(STDOUT_FILENO, buf, r);

	if (o == -1
	|| r == -1
	|| w == -1
	|| w != r)
	{
		free(buf);
		close(o);
		return (0);
	}
	free(buf);
	close(o);
	return (w);
}

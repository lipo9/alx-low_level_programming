#include "main.h"
#include <stdio.h>

/**
 * check_file_openning - checks if the files can be opened
 * @fsource: integer
 * @fdest: integer
 * @argv: arguments array
 * Return: Void
 */
void check_file_openning(int fsource, int fdest, char *argv[])
{
	if (fsource == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (fdest == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
}
/**
 * main - entry of the program (that copies a file to an other)
 * @argc: number of arguments
 * @argv: arguments array
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int fsource, fdest, close_code;
	ssize_t size, w;
	char *buf;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}
	fsource = open(argv[1], O_RDONLY);
	fdest = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	check_file_openning(fsource, fdest, argv);
	size = 1024, buf = malloc(sizeof(char) * size);
	if (!buf)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
	while (size == 1024)
	{
		size = read(fsource, buf, 1024);
		if (size == -1)
			check_file_openning(-1, 0, argv);
		w = write(fdest, buf, size);
		if (w == -1)
			check_file_openning(0, -1, argv);
	}
	free(buf);
	close_code = close(fsource);
	if (close_code == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fsource), exit(100);
	close_code = close(fdest);
	if (close_code == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fdest), exit(100);
	return (0);
}

#include "main.h"

/**
 * read_textfile - reads a text file and prints to the POSIX stdout
 * @filename: name of text file
 * @letters: number ofletters it should read and print
 *
 * Return: actual number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int o, r, w;
	char *buf;

	if (filename == NULL)
		return (0);
	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
		return (0);
	o = open(filename, O_RDONLY);
	if (o == -1)
	{
		free(buf);
		return (0);
	}

	r = read(o, buf, letters);
	if (r == -1)
	{
		free(buf);
		return (0);
	}

	w = write(STDOUT_FILENO, buf, r);
	if (w == -1)
	{
		free(buf);
		return (0);
	}
	close(o);
	return (w);
}

#include "main.h"

/**
 * create_file - creates a file
 * @filename: nameof file to create
 * @text_content: NULL terminated str to write to the file
 * Return: 1 or -1
 */

int create_file(const char *filename, char *text_content)
{
	int fp, w, len = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}
	fp = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	w = write(fp, text_content, len);
	if (w == -1 || fp == -1)
		return (-1);
	close(fp);
	return (1);
}

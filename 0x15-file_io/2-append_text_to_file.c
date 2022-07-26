#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: name of thefile
 * @text_content: NULL terminated stringto add at end of file
 *
 * Return: 1 or -1
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fp, w, len = 0;

	if (filename == NULL)
		return (-1);
	if (text_content !=  NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}
	fp = open(filename, O_WRONLY | O_APPEND);
	w = write(fp, text_content, len);

	if (w == -1 || fp == -1)
		return (-1);
	close(fp);
	return (1);
}

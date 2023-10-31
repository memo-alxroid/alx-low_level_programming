#include "main.h"
#include <string.h>

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: file name string
 * @text_content: NULL terminated string to write to end the file
 * Return: 1 on success, -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fileDiscriptor;
	ssize_t numberOfByetsWrite;
	int textContentLength;

	if (filename == NULL)
	{
		return (-1);
	}
	fileDiscriptor = open(filename, O_RDWR | O_APPEND, 0664);
	if (fileDiscriptor == -1)
	{
		return (-1);
	}
	if (text_content == NULL)
	{
		text_content = "";
	}
	textContentLength = strlen(text_content);
	numberOfByetsWrite = write(fileDiscriptor, text_content, textContentLength);
	if (numberOfByetsWrite == -1)
	{
		return (-1);
	}
	close(fileDiscriptor);
	return (1);
}

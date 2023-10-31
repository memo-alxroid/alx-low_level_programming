#include "main.h"
#include <string.h>

/**
 * create_file - creates a file
 * @filename: file name string
 * @text_content: a NULL terminated string to write to the file
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int fileDiscriptor;
	ssize_t numberOfByetsWrite;
	int textContentLength;

	if (filename == NULL)
	{
		return (-1);
	}
	fileDiscriptor = open(filename, O_RDWR | O_CREAT | O_TRUNC);
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

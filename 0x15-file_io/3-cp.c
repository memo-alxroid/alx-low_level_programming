#include "main.h"
#include <string.h>

/**
 * createOrOpen_file - creates a file
 * @filename: file name string
 * @creatFlag: flag to indicate whether to creat the file or not
 * Return: 1 on success, -1 on failure
 */

int createOrOpen_file(const char *filename, int creatFlag)
{
	int fD;

	if (filename == NULL)
	{
		if (creatFlag)
		{
			return (99);
		}
		return (98);
	}

	if (creatFlag)
	{
		fD = open(filename, O_WRONLY | O_CREAT | O_TRUNC | O_APPEND, 0664);
	}
	else
	{
		fD = open(filename, O_RDONLY, 0664);
	}

	if (fD == -1)
	{
		if (creatFlag)
		{
			return (99);
		}
		return (98);
	}

	return (fD);
}

/**
 * read_textFromfile - reads a text file and prints it to
 * the POSIX standard output
 * @filename: file name string
 * @fileDiscriptor: the file Discriptor
 * Return: the text read from file if any
 */

char *read_textFromfile(const char *filename, int fileDiscriptor)
{
	char *text;
	ssize_t numberOfByetsRead;

	if (filename == NULL)
	{
		return (NULL);
	}

	text = malloc(sizeof(char) * 1024);
	if (text == NULL)
	{
		return (NULL);
	}

	numberOfByetsRead = read(fileDiscriptor, text, 1024);
	if (numberOfByetsRead == -1)
	{
		free(text);
		return (NULL);
	}

	return (text);
}

/**
 * appendWriteTextToFile - appends text at the end of a file
 * @filename: file name string
 * @text: NULL terminated string to write to end the file
 * @fileDiscriptor: the file Discriptor
 * Return: 1 on success, -1 on failure
 */

int appendWriteTextToFile(const char *filename, char *text, int fileDiscriptor)
{
	ssize_t numberOfByetsWrite;
	int textContentLength;

	if (filename == NULL)
	{
		return (99);
	}

	if (text == NULL)
	{
		text = "";
	}

	textContentLength = strlen(text);

	numberOfByetsWrite = write(fileDiscriptor, text, textContentLength);
	if (numberOfByetsWrite == -1)
	{
		return (99);
	}

	return (1);
}

/**
 * HandleErrorCodeIfExist - handles error if any
 * @fileDiscriptor: fileDiscriptor
 * Return: 1 on success, -1 on failure
 */

int HandleErrorCodeIfExist(int fileDiscriptor,char *filename)
{
	if (fileDiscriptor == 98)
	{
		dprintf(2, "Error: Can't read from file %s\n", filename);
		exit(98);
	}
	if (fileDiscriptor == -1)
	{
		dprintf(2, "Error: Can't close %d\n", fileDiscriptor);
		exit(100);
	}
	if (fileDiscriptor == 99)
	{
		dprintf(2, "Error: Can't write to %s\n", filename);
		exit(99);
	}
	return (fileDiscriptor);
}

/**
 * main - copies the content of a file to another file
 * @argc: number of arguments
 * @argv: arguments list
 * Return: 1 on success, -1 on failure
 */

int main(int argc, char *argv[])
{
	int fileDiscriptor;
	char *fileText, *file_from, *file_to;

	if (argc < 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}

	file_from = argv[1];
	file_to = argv[2];

	fileDiscriptor = createOrOpen_file(file_from, 0);
	fileDiscriptor = HandleErrorCodeIfExist(fileDiscriptor, file_from);

	fileText = read_textFromfile(file_from, fileDiscriptor);
	if (fileText == NULL)
	{
		dprintf(2, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}

	fileDiscriptor = close(fileDiscriptor);
	fileDiscriptor = HandleErrorCodeIfExist(fileDiscriptor, "");

	fileDiscriptor = createOrOpen_file(file_to, 1);
	fileDiscriptor = HandleErrorCodeIfExist(fileDiscriptor, file_to);

	fileDiscriptor = appendWriteTextToFile(file_to, fileText, fileDiscriptor);
	fileDiscriptor = HandleErrorCodeIfExist(fileDiscriptor, file_to);

	fileDiscriptor = close(fileDiscriptor);
	fileDiscriptor = HandleErrorCodeIfExist(fileDiscriptor, "");

	return (0);
}

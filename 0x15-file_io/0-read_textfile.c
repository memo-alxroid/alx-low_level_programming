#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: file name string
 * @letters: number of letters it should read and print
 * Return: the actual number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fileDiscriptor;
	char *text;
	ssize_t numberOfByetsRead, numberOfByetsWrite;

	if (filename == NULL)
	{
		return (0);
	}
	fileDiscriptor = open(filename, O_CREAT, O_RDONLY);
	if (fileDiscriptor == -1)
	{
		return (0);
	}
	text = malloc(sizeof(char) * letters);
	if (text == NULL)
	{
		return (0);
	}
	numberOfByetsRead = read(fileDiscriptor, text, letters);
	if (numberOfByetsRead == -1)
	{
		free(text);
		return (0);
	}
	numberOfByetsWrite = write(STDOUT_FILENO, text, numberOfByetsRead);
	if (numberOfByetsWrite == -1)
	{
		free(text);
		return (0);
	}
	close(fileDiscriptor);
	free(text);
	return (numberOfByetsWrite);
}

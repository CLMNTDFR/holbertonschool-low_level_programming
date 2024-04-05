#include "main.h"

/**
* read_textfile- read a text file and print it
* @filename: Name of the file
* @letters: Nuber of letter it should read and print
* Return: the number of letters read and print
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	int filedescriptor;
	int reading;
	ssize_t writing;
	char *buffer;

	if (filename == NULL)
	return (0);

	filedescriptor = open(filename, O_RDONLY);
	if (filedescriptor == -1)
	return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	return (0);

	reading = read(filedescriptor, buffer, letters);
	if (reading == -1)
	{
		free(buffer);
		return (0);
	}

	writing = write(STDOUT_FILENO, buffer, reading);
	if (writing == -1)
	{
		free(buffer);
		return (0);
	}

	free(buffer);
	close(filedescriptor);
	return (writing);
}

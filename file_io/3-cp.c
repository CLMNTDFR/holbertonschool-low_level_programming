#include "main.h"

/**
* main - Copies the content of a file to another file
* @argc: Number of arguments
* @argv: Name of the file
* Return: Always 0.
*/
int main(int argc, char **argv)
{
	int read_success_src, success_dst;
	char *buffer_main;

	if (argc != 3)
	{
		/* Print usage message to standard error and exit with error code */
		dprintf(2, "Usage: %s file_from file_to\n", argv[0]);
		exit(97);
	}

	/* Allocate memory for the main buffer */
	buffer_main = malloc(1024);
	if (buffer_main == NULL)
		return (-1);

	/* Read from source file */
	read_success_src = read_file(argv[1], buffer_main, 1024);
	if (read_success_src == -1)
	{
		/* Print error message and exit with error code */
		dprintf(2, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	/* Write to destination file */
	success_dst = write_file(argv[2], buffer_main);
	if (success_dst == -1)
	{
		/* Print error message and exit with error code */
		dprintf(2, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}

	/* Free allocated memory */
	free(buffer_main);
	return (0);
}

/**
* read_file - Read a text file and copy its content to a buffer
* @file_name: Name of the file
* @buffer_main: Buffer to store file content
* @letters: Number of letters to read
* Return: Number of letters read and copied
*/
ssize_t read_file(const char *file_name, char *buffer_main, size_t letters)
{
	int fd_src, reading;
	char *buffer;

	if (file_name == NULL || buffer_main == NULL)
		return (-1);

	/* Open source file in read-only mode */
	fd_src = open(file_name, O_RDONLY);
	if (fd_src == -1)
		return (-1);

	/* Allocate memory for reading buffer */
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (-1);

	/* Read from source file into buffer */
	reading = read(fd_src, buffer, letters);
	if (reading == -1)
	{
		free(buffer);
		return (-1);
	}

	/* Copy content from reading buffer to main buffer */
	strcpy(buffer_main, buffer);
	free(buffer);
	close(fd_src);

	return (reading);
}

/**
* write_file - Write the content of a buffer to a file
* @file_name: Name of the file
* @buffer_main: Buffer containing the content to write
* Return: 1 on success, -1 on failure
*/
int write_file(const char *file_name, char *buffer_main)
{
	int fd_dst, writing;

	if (file_name == NULL || buffer_main == NULL)
		return (-1);

	/* Open destination file in write-only mode, creating it if not exists */
	fd_dst = open(file_name, O_CREAT | O_WRONLY | O_TRUNC,
				S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
	if (fd_dst == -1)
		return (-1);

	/* Write content from main buffer to destination file */
	writing = write(fd_dst, buffer_main, strlen(buffer_main));
	if (writing == -1)
		return (-1);

	/* Close destination file */
	close(fd_dst);

	return (1);
}

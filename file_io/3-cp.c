#include "main.h"

/**
* main - copies the content  of a file to another file
* @ac: number of arguments
* @av: name of the file
* Return: Always 0.
*/
int main(int ac, char **av)
{

	int read_sucess_file_from;
	int sucess_file_to;
	char *buffer_main;


	if (ac != 3)
	{
		dprintf(2, "Usage: %s file_from file_to\n", av[0]);
		exit(97);
	}

	buffer_main = malloc(1024);

	read_sucess_file_from = read_textfile2(av[1], buffer_main, 1024);
	if (read_sucess_file_from == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}


	sucess_file_to = create_file2(av[2], buffer_main);
	if (sucess_file_to == -1)
	{
		dprintf(2, "Error: Can't write to %s\n", av[2]);
		exit(99);
	}


	free(buffer_main);
	return (0);
}

/**
* read_textfile2- read a text file and print it
* @filename: Name of the file
* @buffer_main: buffer that will be modify in main
* @letters: Nuber of letter it should read and print
* Return: the number of letters read and print
*/

ssize_t read_textfile2(const char *filename, char *buffer_main, size_t letters)
{
	int filedescriptor;
	int reading;
	char *buffer;

	if (filename == NULL)
	return (-1);

	filedescriptor = open(filename, O_RDONLY);
	if (filedescriptor == -1)
	return (-1);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	return (-1);

	reading = read(filedescriptor, buffer, letters);
	if (reading == -1)
	{
		free(buffer);
		return (-1);
	}

	strcpy(buffer_main, buffer);
	free(buffer);
	close(filedescriptor);
	if (filedescriptor == -1)
	{
		dprintf(2, "Error: Can't close %s\n", filename);
		exit(100);
	}
	return (1);
}



/**
* create_file2- create a file
* @filename: Name of the file
* @buffer_main: buffer that is in the main
* Return: 1 succes, -1 faillure
*/
int create_file2(const char *filename, char *buffer_main)
{
	int filedescriptor;
	int writing;

	if (filename == NULL)
	return (-1);


	filedescriptor = open(filename, O_CREAT | O_WRONLY | O_TRUNC,
	S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);

	if (filedescriptor == -1)
	return (-1);

	writing = write(filedescriptor, buffer_main, strlen(buffer_main));
	if (writing == -1)
	return (-1);

	close(filedescriptor);
	if (filedescriptor == -1)
	{
		dprintf(2, "Error: Can't close %s\n", filename);
		exit(100);
	}
	return (1);
}

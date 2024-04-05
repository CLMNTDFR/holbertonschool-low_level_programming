#include "main.h"
#include <stdlib.h>
#include <unistd>

/**
* read_textfile - Reads a text file and prints it to POSIX stdout
* @filename: a pointer to the name of the file
* @letters: the number of letters the function should read & print
*
* Return: * Return: 0 if function fails of if filename is NULL
*         O/w - the actual number of bytes the function car read and print
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t o, r, w; /* ssize_t = signed size_t */
	char *buffer; /* fr: tampon */

/* Check if filename is NULL */
	if (filename == NULL)
		return (0);

/* Allocate memory for the buffer et check success */
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

/* open file in RDONLY */
	o = open(filename, O_RDONLY);
	if (o == -1)
    {
		free(buffer);
		return (0);
	}
/* read 'letters' bytes of data in buffer */
	r = read(o, buffer, letters);
	if (r == -1)
    {
		free(buffer);
		close(o);
		return (0);
	}
/* write buffer's data on std output POSIX */
/* 'r' represent number of readed datas */
	w = write(STDOUT_FILENO, buffer, r);
	if (w == -1 || w < r) {
		free(buffer);
		close(o);
		return (0);
	}
/* check if error when program open, read or write */
/* or if r's data and w's data have different values */

	free(buffer);
	close(o);

	return (w);
}

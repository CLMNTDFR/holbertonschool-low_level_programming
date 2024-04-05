#include "main.h"

/**
* read_textfile - read a text file and print it
* @filename: Name of the file
* @letters: Number of letters it should read and print
* Return: the number of letters read and printed
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
    int filedescriptor;
    int reading;
    ssize_t writing;
    char *buffer;

    /* Check if filename is NULL */
    if (filename == NULL)
        return (0);

    /* Open the file for reading */
    filedescriptor = open(filename, O_RDONLY);
    if (filedescriptor == -1)
        return (0);

    /* Allocate memory for the buffer */
    buffer = malloc(sizeof(char) * letters);
    if (buffer == NULL) {
        close(filedescriptor);
        return (0);
    }

    /* Read data from the file into the buffer */
    reading = read(filedescriptor, buffer, letters);
    if (reading == -1) {
        free(buffer);
        close(filedescriptor);
        return (0);
    }

    /* Write data from the buffer to STDOUT */
    writing = write(STDOUT_FILENO, buffer, reading);
    if (writing == -1 || writing < reading) {
        free(buffer);
        close(filedescriptor);
        return (0);
    }

    /* Free the memory and close the file */
    free(buffer);
    close(filedescriptor);

    /* Return the number of letters read and printed */
    return (writing);
}

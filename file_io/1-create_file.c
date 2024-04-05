#include "main.h"

/**
* create_file - Create a new file and write content to it.
* @filename: Name of the file to create.
* @text_content: Content to write to the file.
* Return: 1 on success, -1 on failure.
*/
int create_file(const char *filename, char *text_content)
{
	int filedesc; /* File descriptor for the newly created file */
    ssize_t writing; /* Number of bytes written to the file */

	/* Check if filename is NULL */
	if (filename == NULL)
		return (-1);

	/* Create the file with the following options: */
	/* O_CREAT: Create the file if it doesn't exist. */
	/* O_WRONLY: Open the file in write-only mode. */
	/* O_TRUNC: Truncate the file to zero length if it already exists. */
	/* S_IRUSR | S_IWUSR: Set read and write permissions for the current user: */
	/* - S_IRUSR: Allow user to read the file. */
	/* - S_IWUSR: Allow user to write to the file. */
	filedesc = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);

	/* Check if opening the file failed. If so, return -1 to indicate an error */
	if (filedesc == -1)
		return (-1);

	/* If text_content is NULL, close the file and return 1 (success) */
	if (text_content == NULL)
    {
		close(filedesc);
		return (1);
	}

	/* Write text_content to the file */
	writing = write(filedesc, text_content, strlen(text_content));

	/* Check if writing to the file failed */
	/* If so, close the file and return -1 to indicate an  */
	if (writing == -1)
    {
		close(filedesc);
		return (-1);
	}

	/* Close the file */
	close(filedesc);

	/* Return 1 to indicate success */
	return (1);
}

#include "main.h"

/**
* append_text_to_file - Append text to the end of a file.
* @filename: Name of the file.
* @text_content: Text to append to the file.
* Return: 1 on success, -1 on failure.
*/
int append_text_to_file(const char *filename, char *text_content)
{
	int filedescriptor; /* File descriptor for the file */
	ssize_t writing; /* Number of bytes written to the file */

	/* Check if filename is NULL */
	if (filename == NULL)
		return (-1);

	/* Open the file in append mode for writing */
	filedescriptor = open(filename, O_APPEND | O_WRONLY);
	if (filedescriptor == -1)
		return (-1);
	/* O_APPEND = add to the end of the file */
	/* O_WRONLY = write only */

	/* If text_content is NULL, close the file and return 1 (success) */
	if (text_content == NULL)
	{
		close(filedescriptor);
		return (1);
	}

	/* Write text_content to the file */
	writing = write(filedescriptor, text_content, strlen(text_content));
	if (writing == -1) /* Check if writing fail */
	{
		close(filedescriptor);
		return (-1);
	}

	/* Close the file */
	close(filedescriptor);

	/* Return 1 to indicate success */
	return (1);
}

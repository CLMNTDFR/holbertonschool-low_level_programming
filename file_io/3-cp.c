#include "main.h"

#define BUFFER_SIZE 1024

/**
* read_textfile - Copies the content of a file to another file.
* @file_from: Name of the source file
* @file_to: Name of the destination file
*
* Return: 1 on success, -1 on failure
*/
ssize_t read_textfile2(const char *file_from, const char *file_to)
{
	int fd_from, fd_to, rd_bytes, wr_bytes;
	char buffer[BUFFER_SIZE];

	/* Open source file */
	fd_from = open(file_from, O_RDONLY);
	if (fd_from == -1)
		return (-1);

	/* Open destination file (truncate if it exists) */
	fd_to = open(file_to, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR | 
    S_IRGRP | S_IWGRP | S_IROTH);
	if (fd_to == -1)
	{
		close(fd_from);
		return (-1);
	}

	/* Copy content from source to destination */
	while ((rd_bytes = read(fd_from, buffer, BUFFER_SIZE)) > 0)
	{
		wr_bytes = write(fd_to, buffer, rd_bytes);
		if (wr_bytes != rd_bytes)
		{
			close(fd_from);
			close(fd_to);
			return (-1);
		}
	}

	/* Error checking */
	if (rd_bytes == -1)
	{
		close(fd_from);
		close(fd_to);
		return (-1);
	}

	/* Close file descriptors */
	if (close(fd_from) == -1 || close(fd_to) == -1)
		return (-1);

	return (1);
}

#include <fcntl.h>
#include <unistd.h>

	/**
	* append_text_to_file - Appends text at the end of a file.
	* @filename: The name of the file.
	* @text_content: The NULL-terminated string to add at the end of the file.
	*
	* Return: 1 on success, -1 on failure (e.g., file does not exist,
	* you do not have permissions to write to the file, or
	* the write operation fails).
	*
	* If filename is NULL, return -1.
	* If text_content is NULL, do not add anything to the file, but
	*         return 1 if the file exists.
	*/int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t bytes_written;
	size_t length = 0;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[length])
			length++;

		bytes_written = write(fd, text_content, length);
		if (bytes_written == -1 || (size_t)bytes_written != length)
		{
			close(fd);
			return (-1);
		}
	}

	close(fd);
	return (1);
}

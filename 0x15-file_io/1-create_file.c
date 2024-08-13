#include <fcntl.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>

	/**
	* create_file - Creates a file with the specified name and content.
	* @filename: The name of the file to create.
	* @text_content: A NULL-terminated string to write to the file.
	*
	* Return: 1 on success, -1 on failure (e.g., file cannot be created,
	* file cannot be written, write “fails”).
	*
	* The created file will have permissions: rw-------.
	* If the file already exists, it will be truncated.
	* If filename is NULL, return -1.
	* If text_content is NULL, create an empty file.
	*/int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t bytes_written;
	size_t length = 0;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);
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

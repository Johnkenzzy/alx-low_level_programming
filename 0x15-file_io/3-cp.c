#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <errno.h>
#include <string.h>

#define BUFFER_SIZE 1024

void print_error_and_exit(int exit_code, const char *message,
		const char *file);
int open_file(const char *filename, int flags, mode_t mode);
void copy_content(int fd_from, int fd_to,
		const char *file_from, const char *file_to);
void close_file(int fd, const char *filename);

	/**
	* print_error_and_exit - Prints an error message
	* to stderr and exits the program.
	*
	* @exit_code: The exit code for the program.
	* @message: The error message to print.
	* @file: The name of the file causing the error.
	*/void print_error_and_exit(int exit_code,
			const char *message, const char *file)
{
	dprintf(STDERR_FILENO, "%s%s\n", message, file);
	exit(exit_code);
}

	/**
	* open_file - Opens a file and handles errors.
	* @filename: The name of the file to open.
	* @flags: The flags to use when opening the file.
	* @mode: The permissions to set if the file is created.
	*
	* Return: The file descriptor on success, or exits on failure.
	*/int open_file(const char *filename, int flags, mode_t mode)
{
	int fd = open(filename, flags, mode);

	if (fd == -1)
	{
		if (flags & O_WRONLY)
			print_error_and_exit(99, "Error: Can't write to ", filename);
		else
			print_error_and_exit(98, "Error: Can't read from file "
					, filename);
	}

	return (fd);
}

	/**
	* copy_content - Copies the content from one file to another.
	* @fd_from: The file descriptor of the source file.
	* @fd_to: The file descriptor of the destination file.
	* @file_from: The name of the source file (for error messages).
	* @file_to: The name of the destination file (for error messages).
	*/void copy_content(int fd_from, int fd_to,
			const char *file_from, const char *file_to)
{
	ssize_t bytes_read, bytes_written;
	char buffer[BUFFER_SIZE];

	while ((bytes_read = read(fd_from, buffer, BUFFER_SIZE)) > 0)
	{
		bytes_written = write(fd_to, buffer, bytes_read);
		if (bytes_written == -1 || bytes_written != bytes_read)
			print_error_and_exit(99, "Error: Can't write to ", file_to);
	}

	if (bytes_read == -1)
		print_error_and_exit(98, "Error: Can't read from file ", file_from);
}

	/**
	* close_file - Closes a file descriptor and handles errors.
	* @fd: The file descriptor to close.
	* @filename: The name of the file (for error messages).
	*/void close_file(int fd, const char *filename)
{
	if (close(fd) == -1)
		print_error_and_exit(100, "Error: Can't close fd ", filename);
}

	/**
	* main - Entry point
	* @arg: number of arguments
	* @argv[]: arrayvof arguments
	* return 0 - Always successful
	* */int main(int argc, char *argv[])
{
	int fd_from, fd_to;

	if (argc != 3)
		print_error_and_exit(97, "Usage: cp file_from file_to", "");

	fd_from = open_file(argv[1], O_RDONLY, 0);

	fd_to = open_file(argv[2], O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR |
			S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);

	copy_content(fd_from, fd_to, argv[1], argv[2]);

	close_file(fd_from, argv[1]);
	close_file(fd_to, argv[2]);

	return (0);
}

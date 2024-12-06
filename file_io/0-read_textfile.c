#include "main.h"

/**
 * read_textfile - Read a text file and print to POSIX stdout
 * @filename: Name of the file to read
 * @letters: Number of letters to read and print
 *
 * Return: Actual number of letters read and printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{

char *buffer;
ssize_t fd, bytes_read, bytes_written;

if (!filename)
return (0);

fd = open(filename, O_RDONLY);
if (fd == -1)
return (0);

buffer = malloc(sizeof(char) * letters);
if (!buffer)
{
close(fd);
return (0);
}

bytes_read = read(fd, buffer, letters);
if (bytes_read == -1)
{
free(buffer);
close(fd);
return (0);
}

bytes_written = write(STDOUT_FILENO, buffer, bytes_read);

free(buffer);
close(fd);

if (bytes_written != bytes_read)
return (0);

return (bytes_written);
}

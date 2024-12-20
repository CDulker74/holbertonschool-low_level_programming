#include "main.h"

/**
 * read_textfile - reads a text file and prints it to POSIX standard output
 * @filename: name of the file to read
 * @letters: number of letters it should read and print
 *
 * Return: actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
int fd;
ssize_t nread, nwritten;
char *buf;

if (!filename)
return (0);

fd = open(filename, O_RDONLY);
if (fd == -1)
return (0);

buf = malloc(sizeof(char) * letters);
if (!buf)
{
close(fd);
return (0);
}

nread = read(fd, buf, letters);
if (nread == -1)
{
free(buf);
close(fd);
return (0);
}

nwritten = write(STDOUT_FILENO, buf, nread);

free(buf);
close(fd);

if (nwritten != nread)
return (0);

return (nwritten);
}

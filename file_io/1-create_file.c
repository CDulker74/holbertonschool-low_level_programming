#include "main.h"
#include <string.h>

/**
 * create_file - Creates a file with specified content
 * @filename: Name of the file to create
 * @text_content: NULL terminated string to write to the file
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
int fd, w_status;
mode_t mode = S_IRUSR | S_IWUSR;

if (!filename)
return (-1);

fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, mode);
if (fd == -1)
return (-1);

if (text_content)
{
w_status = write(fd, text_content, strlen(text_content));
if (w_status == -1 || (size_t)w_status != strlen(text_content))
{
close(fd);
return (-1);
}
}

close(fd);
return (1);
}

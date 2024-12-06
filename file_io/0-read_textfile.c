#include "main.h"

/**
* read_textfile - li un fichier texte et l'imprime sur la sortie standard POSIX
 * @filename: le nom du fichier à lire
 * @letters: le nombre de lettres à lire et imprimer
 *
 * Return: le nombre réel de lettres lues et imprimées, 0 si erreur
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
int fd;
ssize_t nread, nwritten;
char *buffer;

if (filename == NULL)
return (0);

fd = open(filename, O_RDONLY);
if (fd == -1)
return (0);

buffer = malloc(sizeof(char) * letters);
if (buffer == NULL)
{
close(fd);
return (0);
}

nread = read(fd, buffer, letters);
if (nread == -1)
{
free(buffer);
close(fd);
return (0);
}

nwritten = write(STDOUT_FILENO, buffer, nread);

free(buffer);
close(fd);

if (nwritten != nread)
return (0);

return (nwritten);
}

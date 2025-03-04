#include "main.h"
#include <stddef.h>

/**
 * _strchr - Locates a character in a string
 * @s: The string to be scanned
 * @c: The character to be searched for
 *
 * Return: A pointer to the first occurrence of the character c in s,
 *         or NULL if the character is not found
 */
char *_strchr(char *s, char c)
{
while (*s != '\0')
{
if (*s == c)
return (s);
s++;
}

if (c == '\0')
return (s);

return (NULL);
}

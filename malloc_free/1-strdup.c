#include <stdlib.h>
/**
* _strdup - Returns a pointer to a newly allocated space in memory,
*           which contains a copy of the string given as a parameter.
* @str: The string to duplicate
*
* Return: A pointer to the duplicated string, or NULL if it fails
*/
char *_strdup(char *str)
{
char *dup;
unsigned int i, len = 0;
if (str == NULL)
return (NULL);
/* Calculate the length of the string */
while (str[len])
len++;
/* Allocate memory for the new string (length + 1 for null terminator) */
dup = malloc(sizeof(char) * (len + 1));
if (dup == NULL)
return (NULL);
/* Copy the string */
for (i = 0; i <= len; i++)
dup[i] = str[i];
return (dup);
}
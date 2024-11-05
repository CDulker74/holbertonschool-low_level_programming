#include "main.h"
#include <stdio.h>

/**
* _strchr - Localise un caractere dans une chaine
* @s : La chaine a parcourir
* @c : le caractere a trouver
*
* Return: un pointeur vers la premiere occurence du caractere c dans la
* chaine s, ou NULL si le caractere n'est pas trouve
*/
char *_strchr(char *s, char c)
{
while (*s != '\0')
{
if (*s == c)
return (s);
s++;
}

if (*s == c)
return (s);

return (0);
}

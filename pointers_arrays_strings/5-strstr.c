#include "main.h"
#include <stddef.h>

/**
* _strstr - Localise une sous-chaîne
* @haystack: La chaîne principale dans laquelle checher
* @needle: La sous-chaîn a  trouver
* Return: Un pointeur vers le début de la sous-chaîne localis�
* ou NULL si la sous-chaîne n'est pas trouvé
*/
char *_strstr(char *haystack, char *needle)
{
char *h, *n;

while (*haystack != '\0')
{
h = haystack;
n = needle;

while (*n != '\0' && *h == *n)
{
h++;
n++;
}

if (*n == '\0')
return (haystack);

haystack++;
}

return (NULL);
}

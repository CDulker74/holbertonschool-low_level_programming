#include "main.h"

/**
* _memcpy - Copie une zone mémoir
* @dest: Pointeur vers la zone mémoire de destinatio
* @src: Pointeur vers la zone mémoire sourc
* @n: Nombre d'octets a copier
*
* Return: Un pointeur vers la zone mémoire des
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;

for (i = 0; i < n; i++)
{
dest[i] = src[i];
}

return (dest);
}

#include "main.h"

/**
* _memset - Remplit la mémoire avec un octetconstant
* @s: Pointeur vers la zone mémoirea remplir
* @b: La valeur a copier
* @n: Le nombre d'octets a remplir
*
* Return: Un pointeur vers la zone mémoir s
*/
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;

for (i = 0; i < n; i++)
{
s[i] = b;
}

return (s);
}

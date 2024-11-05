#include "main.h"
#include <stdio.h>

/**
* _strpbrk - Recherche dans une chaîne l'un des octets d'un ensembl
* @s: La chaînea examine
* @accept: La chaîne contenant les octet a  recherche
* Return: Un pointeur vers l'octet dans s qui correspond a  l'un des octets
* dans accept, ou NULL si aucun octet de ce type n'est trouv�
*/
char *_strpbrk(char *s, char *accept)
{
int i, j;

for (i = 0; s[i] != '\0'; i++)
{
for (j = 0; accept[j] != '\0'; j++)
{
if (s[i] == accept[j])
{
return (s + i);
}
}
}

return (0);
}

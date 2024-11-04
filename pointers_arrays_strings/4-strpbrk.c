#include "main.h"

/**
* _strpbrk - Recherche dans une chaîne l'un des octets d'un ensemble
* @s: La chaînea examiner
* @accept: La chaîne contenant les octet a  rechercher
* Return: Un pointeur vers l'octet dans s qui correspond a  l'un des octets
* dans accept, ou NULL si aucun octet de ce type n'est trouvé
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

return (NULL);
}

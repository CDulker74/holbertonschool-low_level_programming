#include "main.h"
#include <stdio.h>

/**
* _strspn - Obtient la longueur d'un préfixe sous-cha�e
* @s: La chaîe a examiner
* @accept: La chaîne contenant ls caractèresa  faire correspond
* Return: Le nombre d'octets dans le segment initial de s
* qui ne contient que des octets de accept
*/
unsigned int _strspn(char *s, char *accept)
{
unsigned int count = 0;
int found;
char *a;

while (*s)
{
found = 0;
for (a = accept; *a; a++)
{
if (*s == *a)
{
found = 1;
break;
}
}
if (found == 0)
return (count);
count++;
s++;
}

return (count);
}

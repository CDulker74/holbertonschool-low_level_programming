#include <stdlib.h>

/**
 * str_concat - Concatène deux chaînes de caractères
 * @s1: La première chaîne
 * @s2: La deuxième chaîne
 *
 * Return: Pointeur vers un espace nouvellement alloué contenant les chaînes
 *         concaténées, ou NULL en cas d'échec d'allocation
 */
char *str_concat(char *s1, char *s2)
{
    char *concat;
    unsigned int len1 = 0, len2 = 0, i, j;

    if (s1 == NULL)
        s1 = "";
    if (s2 == NULL)
        s2 = "";

    while (s1[len1])
        len1++;
    while (s2[len2])
        len2++;

    concat = malloc(sizeof(char) * (len1 + len2 + 1));
    if (concat == NULL)
        return (NULL);

    for (i = 0; i < len1; i++)
        concat[i] = s1[i];

    for (j = 0; j < len2; j++, i++)
        concat[i] = s2[j];

    concat[i] = '\0';

    return (concat);
}

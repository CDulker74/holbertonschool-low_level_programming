#include <stdlib.h>

/**
 * string_nconcat - Concatène deux chaînes de caractères
 * @s1: La première chaîne
 * @s2: La deuxième chaîne
 * @n: Le nombre d'octets à prendre de s2
 *
 * Return: Pointeur vers un nouvel espace mémoire, ou NULL en cas d'échec
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
    char *concat;
    unsigned int len1 = 0, len2 = 0, i, j;

    /* Traiter NULL comme une chaîne vide */
    if (s1 == NULL)
        s1 = "";
    if (s2 == NULL)
        s2 = "";

    /* Calculer les longueurs de s1 et s2 */
    while (s1[len1])
        len1++;
    while (s2[len2])
        len2++;

    /* Utiliser toute s2 si n est supérieur ou égal à sa longueur */
    if (n >= len2)
        n = len2;

    /* Allouer de la mémoire pour la chaîne concaténée */
    concat = malloc(sizeof(char) * (len1 + n + 1));
    if (concat == NULL)
        return (NULL);

    /* Copier s1 dans concat */
    for (i = 0; i < len1; i++)
        concat[i] = s1[i];

    /* Copier n octets de s2 dans concat */
    for (j = 0; j < n; j++, i++)
        concat[i] = s2[j];

    /* Terminer la chaîne par un caractère nul */
    concat[i] = '\0';

    return (concat);
}

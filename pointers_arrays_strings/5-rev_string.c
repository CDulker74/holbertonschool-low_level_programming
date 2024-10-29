#include "main.h"

/**
 * rev_string - Inverse une chaîne de caractères
 * @s: Pointeur vers la chaîne à inverser
 */
void rev_string(char *s)
{
    int longueur = 0;
    int debut = 0;
    int fin;
    char temp;

    /* Calculer la longueur de la chaîne */
    while (s[longueur] != '\0')
        longueur++;

    fin = longueur - 1;

    /* Inverser la chaîne */
    while (debut < fin)
    {
        /* Échanger les caractères */
        temp = s[debut];
        s[debut] = s[fin];
        s[fin] = temp;

        /* Déplacer les indices */
        debut++;
        fin--;
    }
}



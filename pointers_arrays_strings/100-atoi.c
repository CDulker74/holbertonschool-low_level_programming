#include "main.h"
#include <limits.h>  /* Pour INT_MAX et INT_MIN */

/**
 * _atoi - convertit une chaîne en entier
 * @s: chaîne à convertir
 *
 * Return: l'entier converti
 */
int _atoi(char *s)
{
    int result = 0;
    int sign = 1;
    int i = 0;

    /* Ignorer les caractères non numériques au début */
    while (s[i] != '\0')
    {
        if (s[i] == '-')
            sign *= -1;
        else if (s[i] >= '0' && s[i] <= '9')
            break; /* Sortir de la boucle dès qu'un chiffre est trouvé */
        i++;
    }

    /* Convertir les chiffres en entier */
    while (s[i] >= '0' && s[i] <= '9')
    {
        /* Vérifier le débordement */
        if (result > (INT_MAX - (s[i] - '0')) / 10)
        {
            return (sign == 1 ? INT_MAX : INT_MIN);
        }
        result = result * 10 + (s[i] - '0');
        i++;
    }

    return result * sign;
}

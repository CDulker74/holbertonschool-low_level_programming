#include "main.h"

/**
 * _puts_recursion - Imprime une chaîne, suivie d'une nouvelle ligne, de façon récursive
 * @s: La chaîne à imprimer
 */
void _puts_recursion(char *s)
{
    if (*s == '\0')
    {
        _putchar('\n');
        return;
    }
    _putchar(*s);
    _puts_recursion(s + 1);
}

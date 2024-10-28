#include "main.h"

/**
* print_numbers - affiche les chiffres de 0 a 9 suivis d'une nouvelle ligne
*/
void print_numbers(void)
{
int i;
for (i = 0; i <= 9; i++)
{
_putchar(i + '0');
}
_putchar('\n');
}

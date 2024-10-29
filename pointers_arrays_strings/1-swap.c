#include "main.h"

/**
* 'int temp;' on declare une variable temporaire pour stocker une des valeurs pendant l'echange
* 'temp = *a;' on stock la valeur point√e par 'a' dans 'temp'
* '*a = *b;' on assigne la valeur point√e par 'b' a l'adresse point√e 'a' 
* *b = temp; : On assigne la valeur temporaire (l'ancienne valeur de a) √† l'adresse point√©e pa
*/
oid swap_int(int *a, int *b)
{
int temp;

temp = *a;
*a = *b;
*b = temp;
}

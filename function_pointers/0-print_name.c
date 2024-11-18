#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - imprime un nom en utilisant une fonction donnée
 * @name: nom à imprimer
 * @f: pointeur de fonction vers la fonction d'impression
 *
 * Description: Cette fonction prend un nom et un pointeur de fonction
 * comme arguments. Elle appelle la fonction pointée par f avec le nom
 * comme argument, si les deux paramètres sont non NULL.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
	{
		f(name);
	}
}

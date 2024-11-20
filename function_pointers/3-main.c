#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - effectue des opérations simples
 * @argc: nombre d'arguments
 * @argv: tableau d'arguments
 *
 * Return: 0 en cas de succès, un code d'erreur sinon
 */
int main(int argc, char *argv[])
{
    int num1, num2, resultat;
    int (*operation)(int, int);

    if (argc != 4)
    {
        printf("Error\n");
        exit(98);
    }

    num1 = atoi(argv[1]);
    num2 = atoi(argv[3]);
    operation = get_op_func(argv[2]);

    if (operation == NULL)
    {
        printf("Error\n");
        exit(99);
    }

    if ((argv[2][0] == '/' || argv[2][0] == '%') && num2 == 0)
    {
        printf("Error\n");
        exit(100);
    }

    resultat = operation(num1, num2);
    printf("%d\n", resultat);

    return (0);
}
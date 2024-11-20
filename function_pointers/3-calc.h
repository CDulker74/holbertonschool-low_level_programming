#ifndef CALC_H
#define CALC_H

#include <stdlib.h>
#include <stdio.h>

/**
 * struct op - Structure op
 *
 * @op: L'opérateur
 * @f: La fonction associée
 */
typedef struct op
{
    char *op;
    int (*f)(int a, int b);
} op_t;

/* Prototypes des fonctions d'opération */
int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/* Prototype de la fonction de sélection d'opération */
int (*get_op_func(char *s))(int, int);

#endif /* CALC_H */
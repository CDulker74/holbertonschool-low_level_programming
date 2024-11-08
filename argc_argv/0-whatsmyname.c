#include <stdio.h>

int main(int argc, char *argv[])
{
    (void)argc; /* Pour éviter l'avertissement de paramètre non utilisé */
    printf("%s\n", argv[0]);
    return (0);
}

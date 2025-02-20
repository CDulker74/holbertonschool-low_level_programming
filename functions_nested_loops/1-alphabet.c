#include "main.h"

/**
 * print_alphabet - Prints the alphabet in lowercase, followed by a new line
 *
 * Descirpition: this functions prints all lowercase letter from 'a' to 'z'
 * and then adds a new lines, it uses _putchar only twice
 *
 * Return: void
 */
void print_alphabet(void)
{
    char letter;

    for (letter = 'a'; letter <= 'z'; letter++)
    {
        _putchar(letter);
    }
    _putchar('\n');
}

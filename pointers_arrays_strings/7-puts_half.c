#include "main.h"

/**
 * puts_half - Prints half of a string
 * @str: The string to print
 *
 * Description: This function prints the second half of the string.
 * If the number of characters is odd, it prints the last n characters
 * of the string, where n = (length_of_the_string + 1) / 2
 */
void puts_half(char *str)
{
int length = 0;
int start;

while (str[length] != '\0')
length++;

start = (length + 1) / 2;

while (str[start] != '\0')
{
_putchar(str[start]);
start++;
}
_putchar('\n');
}

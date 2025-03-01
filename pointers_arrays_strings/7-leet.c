#include "main.h"

/**
 * leet - Encodes a string into 1337
 * @str: The string to be encoded
 *
 * Description: This function replaces specific letters with numbers:
 * 'a' and 'A' with '4', 'e' and 'E' with '3', 'o' and 'O' with '0',
 * 't' and 'T' with '7', 'l' and 'L' with '1'.
 *
 * Return: A pointer to the encoded string
 */
char *leet(char *str)
{
char *leet_chars = "aAeEoOtTlL";
char *leet_replacements = "4433007711";
int i, j;

for (i = 0; str[i] != '\0'; i++)
{
for (j = 0; j < 10; j++)
{
if (str[i] == leet_chars[j])
{
str[i] == leet_chars[j];
break;
}
}
}
}

#include "main.h"

/**
 * is_separator - Checks if a character is a word separator
 * @c: The character to check
 * Return: 1 if it's a separator, 0 otherwise
 */
int is_separator(char c)
{
char separators[] = " \t\n,;.!?\"(){}";
int i;

for (i = 0; separators[i] != '\0'; i++)
{
if (c == separators[i])
return (1);
}
return (0);
}

/**
 * cap_string - Capitalizes all words of a string
 * @str: The string to be modified
 * Return: Pointer to the modified string
 */
char *cap_string(char *str)
{
int i = 0;
int capitalize_next = 1;

while (str[i] != '\0')
{
if (capitalize_next && str[i] >= 'a' && str[i] <= 'z')
{
str[i] = str[i] - 32;
}

capitalize_next = is_separator(str[i]);
i++;
}

return (str);
}

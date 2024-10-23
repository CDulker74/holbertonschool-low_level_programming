#include <stdio.h>

/**
 * main - Prints all numbers of base 16 in lowercase,
 * followed by a new line
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int n;
char letter;

for (n = 48; n < 58; n++)
{
putchar(n);
}
for (letter = 'a'; letter <= 'f'; letter++)
{
putchar(letter);
}
putchar('\n');

return (0);
}

#include <unistd.h>

/**
* _putchar - writes the character c to stdout
* @c: The character to print
*
* Return: On success 1.
* On error, -1 is returned, and errno is set appropriately.
*/
int _putchar(char c);

/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
char str[] = "_putchar";
int i;

for (i = 0; str[i] != '\0'; i++)
{
_putchar(str[i]);
}
_putchar('\n');

return (0);
}

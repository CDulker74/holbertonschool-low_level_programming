#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void) {
char *str = "_putchar";
    
while (*str) {
_putchar(*str);
str++;
}
    
_putchar('\n'); // Print a new line
return 0;
}

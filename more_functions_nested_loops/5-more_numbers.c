#include "main.h"

/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 */
void more_numbers(void)
{
int i, j, tens, ones;

for (i = 0; i < 10; i++)
{
for (j = 0; j <= 14; j++)
{
tens = j / 10;
ones = j & 10;

if (j > 9)
_putchar(tens + '0');
_putchar(ones + '0');           

}
_putchar('\n');
}
}

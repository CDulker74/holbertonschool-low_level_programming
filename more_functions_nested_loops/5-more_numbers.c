#include "main.h"

/**
* more_numbers - affiche 10 fois les nombres de 0 à 14
*/
void more_numbers(void)
{
sh: 1: wq: not found

for (i = 0; i < 10; i++)
{
for (j = 0; j <= 14; j++)
{
num = j;
if (j > 9)
{
_putchar((num / 10) + '0')
			
num = j % 10;
}
_putchar(num + '0');
}
_putchar('\n');
}
}

#include "main.h"

/**
 * jack_bauer - Prints every minute of the day of jack bauer
 */
void jack_bauer(void)
{
int hour, minute

for (hour = 0; hour < 24; hour++)
{
_putchar((hour / 10) + '0');
_putchar((hour % 10) + '0');
_putchar(':');
_putchar((minute / 10) + '0');
_putchar((minute % 10) + '0');          
_putchar('\n');
}
}

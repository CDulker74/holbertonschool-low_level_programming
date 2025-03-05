#include "main.h"

/**
 * _sqrt_helper - Helper function to find the square root
 * @n: The number to find the square root of
 * @i: The current guess
 *
 * Return: The natural square root of n, or -1 if it doesn't exist
 */
int _sqrt_helper(int n, int i)
{
if (i * i > n)
return (-1);
if (i * i == n)
return (i);
return (_sqrt_helper(n, i + 1));
}

/**
 * _sqrt_recursion - Returns the natural square root of a number
 * @n: The number to find the square rppt pg
 *
 * Return: The natural square root of n, or -1 if it doesn't exist
 */
int _sqrt_recurison(int n)
{
if (n < 0)
return (-1);
return (_sqrt_helper(n, 0));
}

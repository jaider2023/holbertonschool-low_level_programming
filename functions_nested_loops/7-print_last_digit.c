#include "main.h"
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int print_last_digit(int n)
{
int last;
last = n % 10;
if (last < 0)
{
last = last * -1;
}
_putchar(last + '0');
return (last);
}

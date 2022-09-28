#include "main.h"

/**
 * _puts_recursion -  function that prints a string
 * @s: string to receive
 * Return: nothing
 */

void _puts_recursion(char *s)
{
if (*s)
{
_putchar(*s);
 _puts_recursion(s + 1);
return;
}
_putchar(*s);
s++;
_puts_recursion(s);
}

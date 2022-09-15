#include "main.h"
/**
 * print_alphabet_x10 - function that prints 10 times the alphabet,
 * in lowercase
 * Return: nothing.
 */

void print_alphabet_x10(void)
{
int n, co;

co = 0;

while (co < 10)
{
for (n = 'a'; n <= 'z'; n++)
{
_putchar(n);
}
co++;
_putchar('\n');
}
}


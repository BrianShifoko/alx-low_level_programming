#include <stdlib.h>
#include "main.h" 

/**
 * malloc_checked - Allocates memory using malloc.
 * @b: The number of bytes to be allocated.
 * Return: A pointer to the allocated memory.
 */

void *malloc_checked(unsigned int b)
{
void *al;
al = malloc(b);
if (al == NULL)
exit(98);
else
return (al);
}
